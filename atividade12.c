#include <conio.h>
#include <stdio.h>

int main ()
{
    int a, b=0, c=0;

    printf("Digite um número: ");
    scanf("%d", &a);
    printf("Os %d primeiro impares são: \n", a);
    a = a * 2;

    while(b<=a){
        if(b%2==1){
            printf("%d\n", b);
        }
        b = b + 1;
    }
}
