#include <stdio.h>
#include <conio.h>
#include <string.h>

int entrada();

char frase[100];

int main()
{
    int i, tam;

    entrada();
    tam = strlen(frase);
    for(i=tam-1; i>=0; i--)
    {
        printf("%c" ,frase[i]);
    }

    return 0;
}

int entrada()
{
    printf("Digite uma frase: ");
    scanf("%s", frase);

    return frase;
}
