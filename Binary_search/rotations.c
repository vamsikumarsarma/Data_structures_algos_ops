#include <stdio.h>
#include <stdlib.h>
int 
bin(int *a, int n){
    int low =0,high = n-1,mid,prev,next;
    while (low <= high){
        //The array is not rotated and sorted 
        if(a[low] < a[high])
            return low;
        mid = (low+high)/2;
        next = (mid+1)%n;
        prev = (mid+n-1)%n;
        //The index will be the no.of rotations
        if(a[mid]<=a[next] && a[mid]>=a[prev])
            return mid;
        else if(a[mid] >= a[low])
            low = mid+1;
        else if(a[mid] <= a[high])
            high = mid -1;
    }
}
int main()
{
   int *a,res,n;
   printf("Enter size of arrray\n");	
   scanf("%d", &n);
   a = (int *)malloc(sizeof(int)*n);
   printf("Enter %d elements",n);
   for(int i=0;i<n;i++)
       scanf("%d",&a[i]);
   res = bin(a,n);
   printf("The array is rotated %d times",res);
   return 0;
}
