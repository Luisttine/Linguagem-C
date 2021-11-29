#include <stdio.h>
#include <string.h>

int main (){
    int i, tam;
    char frase[100];

    do{
        printf("Digite uma frase: ");
        gets(frase);

    }while(strlen(frase)>40);

    for(i=0;i<=strlen(frase);i++){
        printf("\n%c",frase[i]);
    }

    return 0;
}
