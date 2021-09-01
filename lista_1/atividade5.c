#include <stdio.h>

int main()
{
    int x;

    printf("Digite um número inteiro positivo: ");
    scanf(" %d", &x);
    if (x % 2==0){
        printf("Esse número %d é par", x);
    }
    else{
        printf("Esse número %d é ímpar", x);
    }
}