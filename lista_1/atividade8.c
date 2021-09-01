#include <stdio.h>

int main()
{
    int tab, n=0;
    printf("Insira a tabuada: ");
    scanf("%d", &tab);

    while(n < 13){
        printf("%d X %d = ", tab, n);
        printf("%d \n", tab*n);
        n = n + 1;
    }
}