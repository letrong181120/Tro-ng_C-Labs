#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#define MAX 101
typedef char chuoi[MAX];
char* swap(char *a, char *b){
    char tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
}
void uplow(char s[]){  // chuyen doi tu upper case sang lower case
    
	for(int i=0; i<strlen(s); i++){
        if (islower(s[i])) s[i]=toupper(s[i]);
        else s[i]=tolower(s[i]);
    }
}
void revert(char s[])  // doi nguoc chuoi
{
    for (int i=0;i<=strlen(s)/2;i++)
        swap(&s[i],&s[strlen(s)-i-1]);
}
int main() {
    chuoi s;
    int choice;
    do {
        printf("Please input a string: ");
        gets(s);
        uplow(s);
        revert(s);
        printf("The string after reverting is: %s",s);
        printf("\nPress Enter to continue, Esc to exit/n");
        choice=getch();
    } while(choice!=27);
}
