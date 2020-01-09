#include <stdio.h>
#include <string.h>
int main()
{
char str[100];
int i,key;
do{

	printf("\nInput a string: ");
	gets(str);
	
	printf("\nThe string before reversed: %s", str);
	  for(i=strlen(str); i>=0;i--)
	  {
		if(str[i]==' ')
		    {
		  	str[i]='\0';
		  	printf("\nThe string after reversed: %s ", &str[i]+1);
		  	
		    }
      }
    printf("%s ", str);
    printf("\nPress enter to continue another reverse or ESC to exit");
    key=getch(); 
   }while(key!=27);
}





