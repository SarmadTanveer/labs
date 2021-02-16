#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

extern int pop();
extern void push(int);
extern int isEmpyt(); 

int main(int argc, char * argv[])
{
  int ch;
  int prevChar; 
 
	
  while ((ch = getchar()) != EOF) {
    if (!(isalpha(ch) || ch == '>' || ch == '<' || ch == '/'))
      continue;
	if (ch == '<' || ch =='/'|| ch == '>'){
	prevChar = ch; 
}
	else if (isalpha(ch)){
	if (prevChar == '<'){
	push(ch);
}
	else if(prevChar == '/'){
		if (ch != pop()){
		printf("Not Valid\n"); 		
		exit(1); }
		continue; 
}
	else if (prevChar =='>'){
	continue;
}
}

    
}
if (isEmpty()== 0){
fprintf(stdout, "Not Valid \n"); 
exit(1);  
}




fprintf(stdout,"Valid \n");    
  exit(0);
}
