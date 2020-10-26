#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void length();
void char_count();
void vowel_consonant_count();
void sort();

int main()
{
	int ch;
	while(1){
		printf("\n***Strings Basic Programs***\n");
		printf("1.Finding the length of the string without using strlen() fucntion\n");
		printf("2.Counting the character occurences\n");
		printf("3.Counting the vowels and consonants\n");
		printf("4.Sort a string\n");
		printf("5.Exit\n");
		printf("Enter a choice:\n");
		scanf("%d",&ch);

		switch(ch){

			case 1 : length(); 
					 break;

			case 2 : char_count(); 
					 break;

			case 3 : vowel_consonant_count(); 
			         break;

			case 4 : sort(); 
			         break;

			case 5 : exit(0);
		}

	}
	return 0;
}
void length(){

	char s[50];
	int i =0;
	printf("Enter the string\n");
	//fflush(stdin);
	fscanf(stdin,"%s",s);
	while(s[i] != '\0'){
		i++;
	}
	printf("string is %s\n",s);
	printf("length of the string is %d\n",i);
}
void char_count(){

	char *s,ch = 'b';
	int count=0,i=0;
	s = (char *)malloc(20*sizeof(char));
	printf("Enter a string\n");
	fscanf(stdin,"%s",s);
	while(s[i] != '\0'){
		if(s[i] == ch){
			count++;
		}
		i++;
	}
	if (count ==0){
		printf("%c does not exist in given string %s",ch,s);
	}
	else{
		printf("%c appeared %d times in the string\n",ch,count);
	}
	
}
void vowel_consonant_count(){

	char s[] = "vowels have consonants";
	char ch;
	int c_count = 0, v_count = 0,i;

	for(i=0; s[i] != '\0';i++){
		ch = s[i];
		
        // If this character is a vowel, 
        // increment the count of vowels 
        if (ch == 'a' || ch == 'e'
            || ch == 'i' || ch == 'o'
            || ch == 'u' || ch == 'A'
            || ch == 'E' || ch == 'I'
            || ch == 'O' || ch == 'U') 
            v_count++; 
  
        // If this character is a space 
        // skip it 
        else if (ch == ' ') 
            continue; 
  
        else
            // Else increment the count of consonants 
            c_count++; 
    } 
	
	printf("\nVowels: %d", v_count); 
    printf("\nConsonants: %d", c_count);
}
void sort(){

	char string[100];
    printf("\n\t Enter the string : ");
	scanf("%s",string);
	char temp;
	int i, j;
	int n = strlen(string);
	for (i = 0; i < n-1; i++) {
		for (j = i+1; j < n; j++) {
			if (string[i] > string[j]) {
					temp = string[i];
					string[i] = string[j];
					string[j] = temp;
			}
		}
	}

	printf("The sorted string is : %s", string);

}