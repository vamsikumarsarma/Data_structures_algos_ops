#include <stdio.h>

#define R 3
#define C 6

void spiral(int m, int n, int A[R][C]){

	int i, k=0,l=0;

	/*  
	 k - starting row index
     m - ending row index
     l - starting column index
     n - ending column index
     i - iterator
    */


	while(k <m && l < n){
			for(i = 0; i < n; i++){
				printf("%d",A[k][i]);
			}
			
	}
}
int main(){

	int A[R][C] = {
					{ 1, 2, 3, 4, 5, 6 },
                    { 7, 8, 9, 10, 11, 12 },
                    { 13, 14, 15, 16, 17, 18 } 

					};

	spiral(R, C, A);
	return 0;
}