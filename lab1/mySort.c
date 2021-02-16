#include <stdio.h>

void mySort(int d[], unsigned int n)
{
/* insertion sort*/

int j; 
for (j = 0; j< n; j++){

int key = d[j]; 
int i = j-1;

	while (i>-1 && d[i]>key){ 
		d[i+1] = d[i];
		i = i-1; 
		d[i+1] = key; 
	} 
	
}

}
