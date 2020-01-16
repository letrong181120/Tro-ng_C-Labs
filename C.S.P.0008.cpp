#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
int main (){
int word,count;
char str[100];
char i,j;
do {
	printf("\nPlease enter a sting: ");
	gets(str);
	printf("Character appear one time in the string: \n");
	for ( i=0;i<strlen(str);i++){
		for ( j=0;j<strlen(str);j++){
			if (str[i]==str[j])
			count += 1;
		}
	if (count == 1)
	    printf("%c",str[i]);
		count=0;
	}
	printf("\nPress any key to continue! Press ESC to exit!\n");
	printf("==============^-^==============");
	word=getch();}
	while (word!=27);
    }
    
