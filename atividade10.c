#include <conio.h>
#include <stdio.h>

int main ()
{
    int a, b=1;

    printf("\t\tCalculo dos quadrados de uma sequencia de números\n\n");
    printf("Digite um número: ");
    scanf("%d", &a);

    while(b<=a){
        printf("O quadrado do numero %d é ", b);
        printf("%d \n", b*b);
        b = b + 1;
    }

}