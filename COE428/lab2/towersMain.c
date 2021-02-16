#include <stdlib.h>
#include "towers.h"
#include "stdbool.h"
#include <stdio.h>

bool inRange(unsigned int n1, unsigned int n2){
return!((1<= n1 && 3>= n1) && (1<=n2 && 3>=n2)); 

}




int main(int argc, char **argv)
{
    int n = 3;
    int from = 1;
    int dest = 2;
    bool gotError = false;
    if (argc == 2) {
        n = atoi(argv[1]);
    }
	else if (argc > 3){
		if (atoi(argv[2]) != atoi(argv[3])){
		gotError = inRange(atoi(argv[2]),atoi(argv[3])); 
			if (gotError == false){
				n=atoi(argv[1]);
				from = atoi(argv[2]); 
				dest = atoi(argv[3]); 
				}
			}
		else{
		gotError = true; 
			}

}

if (gotError == false){		
    towers(n, from, dest);
    exit(0);}
else {
fprintf(stderr, "ERROR!! Towers must be 1, 2, 3 and not equal to each other."); 
exit(1); 
}
}

