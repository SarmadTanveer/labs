/**
 *  The functions in this module implement a Heapdata structure
 *  of integers.
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
//heap size 100 by defualt can be made larger 
static int heap [100];
static int size = 0;
//arbitrary value to match for empty cells of the array. 
static int null = -16267;

//heap initialization
void init (){
int i;
for (i = 0; i< 100; i++){
    heap[i] = null;
}

}

//max heap algo
void maxHeapify(int i){

int l = 2*i + 1;
int r = 2*i + 2;
int largest = 0;
int temp = 0;
if (l < size && heap[l] > heap[i]){
largest= l;
}
else {
largest = i;
}
if (r<size && heap[r]>heap[largest]){
largest = r;
}

if (largest != i){
temp = heap[i];
heap[i] = heap[largest];
heap[largest] = temp;
maxHeapify(largest);
}


}

//build max heap algo
void buildHeap(){
int i =0;
for (i = size/2; i>= 0; i--){

maxHeapify(i);
}

}

//Heapsort algo. unused in this application. last element of array is largest. 
void heapSort()
{

buildHeap();
int i; 
int n = size - 1;
int temp = 0;
for (i= n; i>0;i--){
temp = heap[i];
heap[i] = heap[0];
heap[0] = temp;
size--;
maxHeapify(0);
}

}

/**
 * heapDelete() removes the biggest integer in the heap and returns it.
 *
 */

int heapDelete()
{
  size--;
  int gInt = heap[0];
  printf("\n %d", gInt);
  heap[0] = heap[size];
  buildHeap();
  return gInt;
}

/**
 *  addHeap(thing2add) adds the "thing2add" to the Heap.
 *
 */
void addHeap(int thing2add)
{
heap[size] = thing2add;
size++;
buildHeap();
}

/**
 * heapSize() returns the number of items in the Heap.
 *
 */
int heapSize()
{
  return size;  
}

//preOrder traversal for the heap. Prints all nodes in valid xml format. Visits(prints) node then visits children. 
 
void preOrder(int x){
int left = 2*x +1;
int right = 2*x +2;
if (x<size && heap[x] != null ){
printf("<node id= \"%d\">", heap[x]);
preOrder(left);
preOrder(right);
printf("</node>");
}
}


