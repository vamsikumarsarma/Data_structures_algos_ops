#include <stdio.h>

int merge(int *arr1, int len1, int *arr2, int len2, int *arr) {
    int i = 0, j = 0, k = 0;
    while((j < len1) && (k < len2)) {
        arr[i++] = (arr1[j] < arr2[k])?arr1[j++]:arr2[k++];
    }
 
    while(j < len1) arr[i++] = arr1[j++];
    while(k < len2) arr[i++] = arr2[k++];
    
    return i;
}
 
void print_arr(int *arr, int len) {
    int i = 0;
    while(i < len) {
        printf("%d ", arr[i++]);
    }
    printf("\n");
}
 
int main() {
    int arr1[] = {3, 5, 7, 10, 15, 19, 21, 34, 67};
    int arr2[] = {1, 4, 7, 9, 18, 26, 30, 56, 71, 81, 94};
    int arr[32] = {0};
    int len = 0;
    int l1 = sizeof(arr1) / sizeof(int);
    int l2 = sizeof(arr2) / sizeof(int);
    
    printf("First Array: ");
    print_arr(arr1, l1);
    printf("Second Array: ");
    print_arr(arr2, l2);
 
    len = merge(arr1, l1, arr2, l2, arr);
    printf("Merged Array: ");
    print_arr(arr, len);
    return 0;
}