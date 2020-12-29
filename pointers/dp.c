#include <stdio.h>
void change(int *p);
void dchange(int **);
int main(){
	int a = 9;
	int *p =&a;
    //change(p);
    //printf("value of a is %d\n", a);

    dchange(&p);
    printf("value of a is %d\n", *p);

	return 0;
}

void change(int *p){

	*p =100;
}

void dchange(int **p){
	**p = 200;
}
