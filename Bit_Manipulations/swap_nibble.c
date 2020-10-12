#include <stdio.h>
int main(){
	int x;
	printf("Enter a number\n");
	scanf("%d",&x);
        x = ( (x & 0x0F)<<4 | (x & 0xF0)>>4 );
        printf("the number is %d\n",x);
	return 0;
}
