#include <stdio.h>
#include <string.h>

int main(){

	char s1[100], s2[100];
	int i,first =0, second=0;
	printf("Enter the first string \n");
	fscanf(stdin,"%s",s1);
	printf("Enter the second string \n");
	fscanf(stdin,"%s",s2);
	int len = 0;

	for(i=0; s1[i] != 0; i++){
		first += s1[i];
	}
	for(i=0; s2[i] != 0; i++){
		second += s2[i];
	}
	if(first == second){
		printf("strings are Anagrams of each other\n");
	}
	else{
		printf("strings are not Anagrams\n");
	}

	return 0;
}