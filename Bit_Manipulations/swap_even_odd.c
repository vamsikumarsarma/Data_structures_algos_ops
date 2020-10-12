#include <stdio.h>
int main(){
	int x;
	printf("Enter a number\n");
	scanf("%d",&x);
        x = ( (x & 0xF0F0F0F0)>>4 | (x & 0x0F0F0F0F)<<4 );
        printf("the number is %d\n",x);
	return 0;
}
