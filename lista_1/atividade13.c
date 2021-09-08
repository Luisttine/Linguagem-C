#include <conio.h>
#include <stdio.h>
#include <math.h>

int main ()
{
    int a, b;

    printf("\t\tCalculo de potencias\n\n");
    printf("Digite um número inteiro: ");
    scanf("%d", &a);
    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &b);
    int c = pow(a, b);
    printf("O valor %d elevado %d é: ", a, b);
    printf("%d", c);
}
