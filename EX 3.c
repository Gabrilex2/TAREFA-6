
#include <stdio.h>
#import <string.h>
void main(){
    char s1[20];

    printf("Palavra: ");
    gets(s1);

    for(int i=strlen(s1);i>=0;i--){

        printf("%c",s1[i]);

    }


}
