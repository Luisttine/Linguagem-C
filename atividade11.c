#include <conio.h>
#include <stdio.h>

int main ()
{
    int a, b=0, c=0;

    printf("Calculo da soma dos n primeiro números naturais\n");
    printf("Digite um número: ");
    scanf("%d", &a);

    while(b<=a){
        c = c + b;
        b = b + 1;
    }

    b = b - 1;
    printf("A soma dos %d primeiros numeros naturais é ", b);
    printf("%d", c);
}