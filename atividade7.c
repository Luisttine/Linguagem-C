#include <stdio.h>
#include <conio.h>

int main()
{
    int num, x;

    printf("Digite um número: ");
    scanf("%d", &num);

    if(num == 0){
        printf("Seu fatorial é 1");
    }
    else{
        for(; num <= 1; num--){
        x = num*(num-1) + x;
        }
        printf("Seu fatorial é %d", x);

    }
}