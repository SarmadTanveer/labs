//
//
//

#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#define HASH_TABLE_SIZE 1057
typedef struct Entry Entry, *EntryPtr;
struct Entry {
  char * string;
  int count;
};
Entry hash_table[HASH_TABLE_SIZE];

void initialize(){
int i;

for (i=0; i<1057;i++){
 hash_table[i].string = malloc(sizeof(char *));
 strcpy(hash_table[i].string, "");
 hash_table[i].count = 0;
}

}


int hash(char * tag){
char *p = tag;
unsigned h = 2166136261;

int i;

for (i =0; i<(int)strlen(tag); i++){
    h = (h*16777619) ^ p[i];
}
return(h%HASH_TABLE_SIZE);
}

/*int getCount(char * tag){
int count = 0;
int hash = hash(tag);
if (stricmp(hash_table[hash].string,tag)== 0){
    count = hash_table[hash].count;
}
else {
    while (stricmp(hash_table[hash].string,tag) != 0 && hash<HASH_TABLE_SIZE){
        hash++;
    }
    if (hash == HASH_TABLE_SIZE){
        fprintf(stderr,"Search Unsuccessful")
        exit(1);
    }
    count = hash_table[hash].count;
}
return count;
}*/

void print(){
int i;
for (i=0; i<HASH_TABLE_SIZE; i++){
    if (hash_table[i].count != 0){
        printf("%s %d \n", hash_table[i].string, hash_table[i].count);
    }

}

}

void add(char * tag){
int hashVal = hash(tag);
    if (strcmp(hash_table[hashVal].string,"") == 0){
        hash_table[hashVal].string = (char *) realloc(hash_table[hashVal].string,sizeof(char*)*strlen(tag));
        strcpy(hash_table[hashVal].string,tag);
        hash_table[hashVal].count++;

    }
    else {
            if (strcmp(hash_table[hashVal].string,tag)!=0){
            while((strcmp(hash_table[hashVal].string,"") != 0) && (hashVal<HASH_TABLE_SIZE)){
                hashVal++;
            }
            if (hashVal == HASH_TABLE_SIZE){
        fprintf(stderr,"Hash Table full");
        exit(1);
    }
        hash_table[hashVal].string = (char *) realloc(hash_table[hashVal].string,sizeof(char*)*strlen(tag));
        strcpy(hash_table[hashVal].string,tag);
        hash_table[hashVal].count++; }
            else {
            hash_table[hashVal].count++;
            }

    }

}


