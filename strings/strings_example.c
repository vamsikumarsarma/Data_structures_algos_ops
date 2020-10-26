//Uncomment the functions to understand.
#include <stdio.h>
#include <string.h>

void display(char str[]);
void string_pointer();

int main(){

	char s[50];

	printf("Enter the string\n");
	//Always try to read the string using fgets.
	fgets(s,sizeof(s),stdin);
	printf("Name is %s\n",s);

	//how do we send the string as an argument
	//display(s);

	//Using char pointer
	//string_pointer();
	return 0;
}

void display(char str[]){

	printf("Name from the display function is %s\n",str);
}

void string_pointer(){

	char name[] = "Clanguage";
	char *ptr;
	ptr = name;


	printf("%c\n",*name ); // output:C
	printf("%c\n",*(name+1) ); // output:l
	printf("%c\n",*(name+5) ); // output:u

}