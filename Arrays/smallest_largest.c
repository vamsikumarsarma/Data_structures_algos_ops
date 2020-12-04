#include <stdio.h>

int main(){

	int a[] = {1,2,3,4,5};
	int smallest,largest,n,i;
	n = sizeof(a)/sizeof(a[0]);
	smallest = largest = a[0];
	for(i=1;i<n;i++){

		if(a[i] > largest ){
			largest = a[i];
		}
		if (a[i] < smallest){
			smallest = a[i];
		}
	}

 	printf("smallest is %d\n", smallest);
 	printf("largest is %d\n", largest);
	return -1;

}