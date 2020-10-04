#include <stdio.h>
#include <stdlib.h>
int 
bin(int *a,int ele, int high){
    int low =0,mid;
    while (low <= high){
        mid = (low+high)/2;
        if(a[mid] == ele)
            return mid;
        else if(a[mid] < ele)
            low = mid+1;
        else
            high = mid -1;
    }
    return -1;
}
int main()
{
   int *a,res,ele,n;
   printf("Enter size of arrray\n");	
   scanf("%d", &n);
   a = (int *)malloc(sizeof(int)*n);
   printf("Enter %d elements",n);
   for(int i=0;i<n;i++)
       scanf("%d",&a[i]);
   printf("enter element to search\n");
   scanf("%d",&ele);
   res = bin(a,ele,n-1);
   if(res ==-1){
       printf("element not found\n");
   }
   else{
       printf("element found at %d index",res);
   }
    return 0;
}
