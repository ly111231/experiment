#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>
#include <bsd/string.h>

//#define MAX_DATA 512
//#define MAX_ROWS 100

struct Address {
    int id;
    int set;
    char *name;
    char *email;
};

struct Database {
    struct Address **rows;
		int max_rows;
		int max_data;
};

struct Connection {
    FILE *file;
    struct Database *db;
};

void die(const char *message)
{
    if(errno) {
        perror(message);
    } else {
        printf("ERROR: %s\n", message);
    }

    exit(1);
}

void Address_print(struct Address *addr)
{
    printf("%d %s %s\n",
            addr->id, addr->name, addr->email);
}

void Database_load(struct Connection *conn)
{
		rewind(conn->file);
    int rc = fread(conn->db, sizeof(struct Database), 1, conn->file);
    if(rc != 1) {die("Failed to load database.");}
		conn->db->rows = (struct Address **)malloc(conn->db->max_rows * sizeof(struct Address *));
		for(int i=0; i<conn->db->max_rows; i++){
				//创建每个address块
				conn->db->rows[i] = (struct Address *)malloc(sizeof(struct Address));
				rc = fread(conn->db->rows[i], sizeof(struct Address), 1, conn->file);
				if(rc != 1) die("Failed to load database(address).");
				//依次创建name和email块
				conn->db->rows[i]->name = (char *)malloc(conn->db->max_data * sizeof(char));
				if(!conn->db->rows[i]->name) die("Memory error");
				conn->db->rows[i]->email = (char *)malloc(conn->db->max_data * sizeof(char));
				if(!conn->db->rows[i]->email) die("Memory error");

				rc = fread(conn->db->rows[i]->name, sizeof(char), conn->db->max_data, conn->file); 
				if(rc != conn->db->max_data) die("Faild to read database(name).");
				rc = fread(conn->db->rows[i]->email, sizeof(char), conn->db->max_data, conn->file); 
				if(rc != conn->db->max_data) die("Faild to read database(email).");

		}
}

struct Connection *Database_open(const char *filename, char mode)
{
		//创建Connection
    struct Connection *conn = malloc(sizeof(struct Connection));
    if(!conn) die("Memory error");
		//创建Database
    conn->db = malloc(sizeof(struct Database));
    if(!conn->db) die("Memory error");

    if(mode == 'c') {
        conn->file = fopen(filename, "w");
    } else {
        conn->file = fopen(filename, "r+");

        if(conn->file) {
            Database_load(conn);
        }
    }

    if(!conn->file) die("Failed to open the file");

    return conn;
}

void Database_close(struct Connection *conn)
{
    if(conn) {
        if(conn->file) fclose(conn->file);
        if(conn->db){
						for(int i=0; i< conn->db->max_rows; i++){
								free(conn->db->rows[i]->name);
								free(conn->db->rows[i]->email);
								free(conn->db->rows[i]);
						}
						free(conn->db->rows);
						free(conn->db);
				}
        free(conn);
    }
}

void Database_write(struct Connection *conn)
{
		int i;
    rewind(conn->file);
		//保存Database结构体到文件中	
    int rc = fwrite(conn->db, sizeof(struct Database), 1, conn->file);
    if(rc != 1) {die("Failed to write database.");}
		for(i=0; i<conn->db->max_rows; i++){
				//保存每个Adderss块,依次保存address块,姓名，邮箱
				rc = fwrite(conn->db->rows[i], sizeof(struct Address), 1, conn->file);
				if(rc != 1) die("Faild to write database(adderss).");
				rc = fwrite(conn->db->rows[i]->name, sizeof(char), conn->db->max_data, conn->file); 
				if(rc != conn->db->max_data) die("Faild to write database(name).");
				rc = fwrite(conn->db->rows[i]->email, sizeof(char), conn->db->max_data, conn->file); 
				if(rc != conn->db->max_data) die("Faild to write database(email).");

		}
    rc = fflush(conn->file);
    if(rc == -1) die("Cannot flush database.");
}

void Database_create(struct Connection *conn, int max_rows, int max_data)
{

    int i = 0;
		conn->db->max_rows = max_rows;
		conn->db->max_data = max_data;
		conn->db->rows = (struct Address **)malloc(max_rows * sizeof(struct Address *));
    if(!conn->db->rows) die("Memory error");
    for(i = 0; i < max_rows; i++) {
        // make a prototype to initialize it
        struct Address *addr = (struct Address *)malloc(sizeof(struct Address));
				if(!addr) die("Memory error");
				addr->name = (char *)malloc(max_data * sizeof(char));
				if(!addr->name) die("Memory error");
				addr->email = (char *)malloc(max_data * sizeof(char));
				if(!addr->email) die("Memory error");
				addr->id = i;
				addr->set = 0;
        // then just assign it
        conn->db->rows[i] = addr;
    }
}

void Database_set(struct Connection *conn, int id, const char *name, const char *email)
{
    struct Address *addr = conn->db->rows[id];
    if(addr->set) die("Already set, delete it first");

    addr->set = 1;
    // WARNING: bug, read the "How To Break It" and fix this
    int res = strlcpy(addr->name, name, conn->db->max_data);
    // demonstrate the strncpy bug
    if(!res) die("Name copy failed");

   res = strlcpy(addr->email, email, conn->db->max_data);


    if(!res) die("Email copy failed");
}

void Database_get(struct Connection *conn, int id)
{
    struct Address *addr = conn->db->rows[id];

    if(addr->set) {
        Address_print(addr);
    } else {
        die("ID is not set");
    }
}

void Database_delete(struct Connection *conn, int id)
{
    conn->db->rows[id]->set = 0;
}

void Database_list(struct Connection *conn)
{
    int i = 0;
    struct Database *db = conn->db;

    for(i = 0; i < db->max_rows; i++) {
        struct Address *cur = db->rows[i];

        if(cur->set) {
            Address_print(cur);
        }
    }
}

void Database_find_name(struct Connection *conn, char *name){
	int flag = 0;
	struct Address * addr = NULL;
	for(int i=0; i<conn->db->max_rows; i++){
		addr = conn->db->rows[i];
		if (addr->set){
			if(!strcmp(addr->name, name)){
				Address_print(addr);
				flag = 1;
			}
		}
	}
	if(!flag){
		printf("Not find student named %s\n", name);
	}
}

int main(int argc, char *argv[])
{
    if(argc < 3) die("USAGE: ex17 <dbfile> <action> [action params]");

    char *filename = argv[1];
    char action = argv[2][0];
    struct Connection *conn = Database_open(filename, action);
    int id = 0;

    if(argc > 3) id = atoi(argv[3]);
//    if(id >= MAX_ROWS) die("There's not that many records.");

    switch(action) {
        case 'c':
						if(argc != 5) die("Need max_rows, max_data to set.");
            Database_create(conn, atoi(argv[3]), atoi(argv[4]));
            Database_write(conn);
            break;

        case 'g':
            if(argc != 4) die("Need an id to get");

            Database_get(conn, id);
            break;

        case 's':
            if(argc != 6) die("Need id, name, email to set");

            Database_set(conn, id, argv[4], argv[5]);
            Database_write(conn);
            break;

        case 'd':
            if(argc != 4) die("Need id to delete");

            Database_delete(conn, id);
            Database_write(conn);
            break;

        case 'l':
            Database_list(conn);
            break;
				case 'f':
						Database_find_name(conn, argv[3]);
						break;
        default:
            die("Invalid action, only: c=create, g=get, s=set, d=del, l=list, f=find name");
    }

    Database_close(conn);

    return 0;
}
