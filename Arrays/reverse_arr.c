#include <stdio.h>

int main(){

	int a[] = {1,2,3,4,5,6},len =0,i=0,j=0,temp;
	len = sizeof(a)/sizeof(a[0]);
	j=len-1;

	printf("Array before reversing the elements\n");
	for(i=0;i<len;i++)
		printf("%d\t", a[i]);

	for(i=0;i<len/2;i++){
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
	}
	printf("Array versing the elements\n");
	for(i=0;i<len;i++)
		printf("%d\t", a[i]);

	return 0;

}