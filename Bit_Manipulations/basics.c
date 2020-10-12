#include <stdio.h>
#include <stdlib.h>

#define ISODD(n) ((n & 1))
#define ISPOW(n) (n & (n-1))
int main(){

	int ch,num;
	while(1){
		printf("\n***Bit operations to perform***\n");
		printf("1.check EVEN or ODD Number\n");
		printf("2. check powers of 2\n");
		printf("3.exit\n");
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
			case 3: exit(0);

					


		}

	}
	return 0;

}