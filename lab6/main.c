#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

extern int pop();
extern void push(int);
extern void addHeap(int thing2add);
extern int heapSize();
extern int heapDelete();
extern int isEmpty();
extern void preOrder(int x); 






int main(int argc, char * argv[])
{
  int value;
  int i;
  int size;
// read input. 
  while (scanf("%d", &value) != EOF) {
    fprintf(stderr, "READING INPUT: %d\n", value);
    addHeap(value);
  }
//print heap in valid xml format(tree structure)
preOrder(0); 

size = heapSize(); 

//delete items from heap while printing them, parent before child. Push items onto stack. 
for (i = 0; i<size; i++){
push(heapDelete()); 
}

//pop stack until no items remain. 
while (isEmpty() == 0){
printf("\n %d",pop()); 
}



  exit(0);
}