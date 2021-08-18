#include <conio.h>
#include <stdio.h>

int main ()
{
    char c;
    int  a, b;

    do{
        printf ("\n\nEscolha uma opcao:\n\n");
        printf ("\t(1)...Divisão\n");
        printf ("\t(2)...Resto da Divisão\n");
        printf ("\t(3)...Adição\n");
        printf ("\t(4)...Multiplicação\n\n");
        scanf("%c",&c);

    } 

    while ((c!='1')&&(c!='2')&&(c!='3')&&(c!='4'));

    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);

    switch (c){
        case '1': 
            printf ("\tResultado: %d", a/b);
            break;
        case '2': 
            printf ("\tResultado: %d", a%b);
            break;
        case '3': 
            printf ("\tResultado: %d", a+b);
            break;
        case '4': 
            printf ("\tResultado: %d", a*b);
            break;
    }
}