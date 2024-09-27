
#include <stdio.h>
#import <string.h>
void main(){
    char s1[20];
    int tam=0;
    printf("Me de uma palavra: ");
    gets(s1);
    printf("\nUsando o \"strlen\": %i",strlen(s1));

    while(s1[tam]!='\0'){
        tam++;
    }
    printf("\n\nSem usar o \"strlen\": %i\n",tam);

    if(strlen(s1)==tam)printf("\nOs resultados sao iguais\n");
    else printf("\nOs resultados sao diferentes\n");


}
