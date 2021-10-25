#include <stdio.h>


int main(){
    int vetor[10], i, maior, num, cont = 0, soma = 0;
    float media;

    for (i=0; i<10; i++){
        printf("\nvetor[%d]=",i);
        scanf("%d", &num);
        if((num%2)==0){
            vetor[cont]=num;
            soma=vetor[cont]+soma;
            cont++;
        }
    }
    media = (soma/cont);
    maior = vetor[0];


    for(i=1;i<cont;i++){
        if(vetor[i]>maior){
            maior=vetor[i];
        }
    }

    printf("\n A quantidade  de valores armazenados é %d",cont);
    printf("\n A média:%.2f", media);
    printf("\n O maior valor é: %d", maior);
}
