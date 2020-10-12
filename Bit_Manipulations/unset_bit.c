#include <stdio.h>
int main(){
	int num,pos;
	printf("Enter a number\n");
	scanf("%d",&num);
	printf("Enter the position the unset\n");
	scanf("%d",&pos);
        num = num & ~(1 << pos);
        printf("the number is %d\n",num);
	return 0;
}
