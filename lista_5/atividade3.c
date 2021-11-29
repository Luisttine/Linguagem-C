#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char palavra[30];
    int i, tam, diferentes = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tam = strlen(palavra);
    tam--;
    i = 0;

    while(tam >= i){
        if(palavra[i] != palavra[tam])
            diferentes ++;
        i++;
        tam--;
    }

    if(diferentes == 0)
        printf("\n1");
    else
        printf("\n0");

    return 0;
}
