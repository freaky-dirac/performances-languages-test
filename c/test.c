#include "test.h"
#include <stdio.h>

int main(){
	int i, j, k;
	double result[20][20];
	
	for(i=0; i<20; ++i)
	    for(j=0; j<20; ++j)
	    	for(k=0; k<20; ++k)
	        	result[i][j]+=first[i][k]*second[k][j];

    // print result
	for(i=0; i<20; ++i){
		printf("%s","\n");
		for(j=0; j<20; ++j)
			printf(" %f", result[i][j]);
	}
			
	return 0;
}