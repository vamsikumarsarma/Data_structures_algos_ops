#include<stdio.h>
void swap(int A[], int x, int y){

	int temp = A[x];
	A[x] = A[y];
	A[y] = temp;
}
void threewaypartition(int A[], int high){

	int low = 0, mid =0;

	while(mid <= high){
		if(A[mid]==0){
			swap(A, low, mid);
			low++;
			mid++;
		}
		else if(A[mid] ==1){
			mid++;
		}
		else{
			swap(A, mid,high);
			high--;
		}
	}
}
int main(){

	int A[] = {1,2,1,1,2,0,1,2,0}, n;
	n = sizeof(A)/sizeof(A[0]);
	threewaypartition(A,n-1);	
	
	for (int i = 0 ; i < n; i++) {
		printf("%d ", A[i]);
	}
	return 0;
}
