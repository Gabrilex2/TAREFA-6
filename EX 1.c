
#include <stdio.h>
#import <string.h>
#import <ctype.h>
void main(){
    char caracteres[101],maiusc=0,minusc=0;
    int numero=0;

    printf("Senha: ");
    fgets(caracteres,100,stdin);
    int tamanho=strlen(caracteres);
    for(int i=0;i<tamanho;i++){
        if(isupper(caracteres[i]))
            maiusc++;
        if(islower(caracteres[i]))
            minusc++;
        if (isdigit(caracteres[i]))
            numero++;
    }
    if(tamanho>=8 && tamanho<101 && maiusc>0 && minusc>0 && numero>0)printf("A senha e valida");
    else printf("Voce nao atendeu aos requisitos");




}
