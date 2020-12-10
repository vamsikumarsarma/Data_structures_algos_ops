#include <stdio.h>
#include <stdlib.h>

#define ISODD(n) ((n & 1))
#define ISPOW(n) (n & (n-1))
#define TOGGLE(num, pos) num ^= (1<<(pos-1))
int main(){

	int ch,num,pos;
	while(1){
		printf("\n***Bit operations to perform***\n");
		printf("1.check EVEN or ODD Number\n");
		printf("2. check powers of 2\n");
		printf("3.Toggle a bit\n");
		printf("4.exit\n");
		printf("Enter a choice\n");
		scanf("%d",&ch);

		switch(ch){
			case 1:	
					printf("Enter a number\n");
					scanf("%d",&num);
					if(ISODD(num)){
						printf("%d is an odd number\n",num );
					}
					else{
						printf("%d is a even nuber\n",num);
					}
					break;
			case 2:
					printf("Enter a number\n");
					scanf("%d",&num);
					if(!(ISPOW(num))){
						printf("%d is power of 2\n",num);
					}
					else{
						printf("%d is not a power of 2\n",num);
					}
					break;
			case 3 : 
	
					 printf("Enter a number\n");
					 scanf("%d",&num);
					 printf("Enter a position toggle\n");
					 scanf("%d",&pos);
					 printf("number before toggle is %d\n",num);
					 TOGGLE(num,pos);
					 printf("number before toggle is %d\n",num);
					 break;

			case 4: exit(0);

					


		}

	}
	return 0;

}