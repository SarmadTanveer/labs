#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

extern char* pop();
extern void push(char *);
extern int isEmpty();

extern void initialize();
extern void add();
extern void print();

void append(char * destination, char source){
 destination = realloc(destination,strlen(destination)+1);
  destination[strlen(destination)] = source;
}



int main(int argc, char * argv[])
{
  int ch;
  int prevChar;
  char * identifier = (char*) calloc(50,sizeof(char*));
  initialize();



  while ((ch = getchar()) != EOF) {
    if (!(isalpha(ch) || ch == '>' || ch == '<' || ch == '/'))
      continue;
	if (ch == '<' || ch == '/') {
	prevChar = ch;
}
	else if (isalpha(ch) ){
	if (prevChar == '<' || prevChar =='/' ){
	append(identifier,ch);

}

}
    else if (ch == '>' && prevChar == '<'){
        push(identifier);
        add(identifier);
        free(identifier);
        identifier = (char*)calloc(50,sizeof(char*));
        }

    else if (ch == '>' && prevChar == '/'){
    if (strcmp(identifier,pop())!=0){
        printf("Not Valid");
        exit(1);
    }
    free(identifier);
    identifier = (char *)calloc(50,sizeof(char*));
        }




}
if (isEmpty()== 0){
fprintf(stdout, "Not Valid \n");
exit(1);
}

fprintf(stdout,"Valid \n");
print();

  exit(0);
}

