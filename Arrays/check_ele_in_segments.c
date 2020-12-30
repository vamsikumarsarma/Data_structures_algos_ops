
#include<stdio.h>
int findele(int a[], int ele, int seg, int len){

	int i=0,j=0,check=0;
	
	for(i = 0; i<len;i++){
        if(j == seg){
        	//printf("Inside j check: i = %d j = %d, check = %d\n",i,j,check);
        	if(check == 1){
        		j = 0;
        		check =0;	
        	}
            else{
            	//printf("returning from chck\n");
        		return 0;
            }
        }
		if(a[i] == ele){
			//printf("a[%d] = %d\n",i, a[i]);
			check =1;			
		}
		//printf("j = %d\n", j);
		j++;
	}
	//printf("i values is %d, len is %d\n", i, len);
	return check;
}
int main(){

	int a[] = {1,2,3,1,2,3,1,3,2,1}, ele =0,seg=0,ret=0,len=0;
	printf("Enter the segment length\n");
	scanf("%d", &seg);
	printf("Enter the element to search\n");
	scanf("%d", &ele);

	len = sizeof(a)/sizeof(a[0]);

    ret = findele(a,ele,seg,len);

    if(ret ==1){
    	printf("%d is found for every %d segments", ele,seg);
    }
	else{
		printf("%d is not found for every %d segments", ele,seg);
	}
}
