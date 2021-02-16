Summary :

Everything seems to work fine, regardless of supplied data. I used insertion sort here because the array length is not large enough to implement merge sort. I did have a little problem with sorting the first element however it was resolved by setting the counter to start from 0. I also used the atoi function in sortMain2.c to cast the cmd arguments from string to int.  




Question 1: 
The mySort function has the header mySort(int data[], unsigned int n) where n is the number of data objects to be sorted. The new module can be exploited in the following way: 

mySort(int data[], unsigned int n){


betterSort(data[],0,n-1);   
}

The first index is always 0 and the last index is one less than the length of the array. 
