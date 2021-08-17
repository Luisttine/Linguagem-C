#include <stdio.h>

int main()
{
    int x;

    printf("Digite seu ano de nascimento: ");
    scanf(" %d", &x);
    x = 2021 - x;
    printf("Sua idade é %d", x);
}