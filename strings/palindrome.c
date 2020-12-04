#include <stdio.h>
#include <string.h>

int main(){

	char s[100];
	int i;
	printf("Enter the string \n");
	fscanf(stdin,"%s",s);
	int len = 0;

	while(s[i] != 0){
		len++;
		i++;
	}
	int half_count = len/2;
	int flag = 0;
	for(i=0;i<half_count; i++){
		if(s[i] != s[len-i-1]){
			flag = 1;
			break;
		}
	}
	if(flag){
		printf("string is not palindrome\n");
	}
	else{
		printf("string is palindrome\n");
	}
	return 0;
}