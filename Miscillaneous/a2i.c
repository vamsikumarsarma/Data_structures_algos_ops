
#include <stdio.h>
#include <string.h>

int a2i(char *c);
int main()
{
    char c[23] = "123";
    int num=0;
    num = a2i(c);
    printf("the number is %d\n", num);
    return 0;
}
int a2i(char *c){
    int len, num=0,temp=0;
    len = strlen(c);
    int i=0;
    while(i<len){
        temp = c[i] - '0';
        num = num*10 + temp;
        i++;
    }
    return num;
}