#include <stdio.h>

void print(int a[],int start, int len );
int main(){

	int a[] = {1,2,3,4,5};
	int n;
	n = sizeof(a)/sizeof(a[0]);
	print(a,0,n);
 
	return -1;

}

void print(int a[], int start ,int n){

	if(start >= n){
		return;
	}
	printf("%d", a[start]);

	print(a, start+1,n);
}