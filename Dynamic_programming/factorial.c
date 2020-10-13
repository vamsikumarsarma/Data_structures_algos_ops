#include <stdio.h>
int fact(int n){

	int f[n+1];
	f[0] = 1;


	for(int i =1;i<=n;i++){
		f[i] = i*f[i-1];
	}
	return f[n];
}

int main(){
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	printf("the factorial of %d is %d\n",n,fact(n));

	return 0;
}