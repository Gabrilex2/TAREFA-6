
#include <stdio.h>
#import <string.h>
#import <locale.h>
void main(){
    setlocale(0,"Portuguese");
    char s1[50],string[50];
    int palindromo;
    printf("Palavra: ");
    gets(s1);
    for(int i=strlen(s1);i>=0;i--){s1[i]=tolower(s1[i]);}
    strcpy(string,s1);

    for(int i=strlen(s1);i>=0;i--){

    if(s1[i]==',' || s1[i]=='-' || s1[i]==' ') break;



        string[i]=s1[strlen(s1)-1-i];
    }

    palindromo=strcmp(s1,string);
    if(palindromo==0)printf("\nÉ palíndromo\n");
    else printf("\nNão é palíndromo\n");

}
