#include <stdio.h>
int main()
{
	int num,count=0;
	printf("Enter a number\n");
	scanf("%d",&num);

	while(num){
		count += num & 1;
		num >>= 1;
	}
	printf("number of set bits are %d\n",num,count);
}
