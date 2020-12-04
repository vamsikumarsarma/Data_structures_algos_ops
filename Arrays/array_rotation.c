#include <stdio.h>

int main(){

	int a[] = {1,2,3,4,5};
	int rotate,n,temp,i,j;
	printf("Enter number of rotataions\n");
	scanf("%d", &rotate);
	n = sizeof(a)/sizeof(a[0]);
	for(i = 0; i<rotate; i++){
		temp = a[0];
		for(j = 0; j<n-1; j++){
			a[j] = a[j+1];
		}
		a[j] = temp;
	}
	 for( i = 0; i < n; i++){  
        printf("%d ", a[i]);  
    }  
	return -1;

}