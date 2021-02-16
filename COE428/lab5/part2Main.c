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
  int counter[122];
  int i;

  for (i = 0; i<=122;i++){
    counter[i] = 0;
  }


  while ((ch = getchar()) != EOF) {
    if (!(isalpha(ch) || ch == '>' || ch == '<' || ch == '/'))
      continue;
	if (ch == '<' || ch =='/'|| ch == '>'){
	prevChar = ch;
}
	else if (isalpha(ch)){
	if (prevChar == '<'){
	push(ch);
	counter[ch]++;
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

for (i=0; i<=122; i++){
    if (counter[i] != 0){
        fprintf(stdout, "%c %d \n",i, counter[i]);

    }


}
  exit(0);
}
