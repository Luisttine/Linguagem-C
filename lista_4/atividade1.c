#include <stdio.h>

int main(){

    int matriz[5][5];

    for(int linha = 0 ; linha < 5; linha++)
    {
        for(int coluna = 0 ; coluna < 5; coluna++)
        {
            if(linha == coluna) matriz[linha][coluna] = 1 ; //Diagonal principal
            else matriz[linha][coluna] = 0;
        }
    }

    for(int linha = 0 ; linha < 5; linha++)
    {
        for(int coluna = 0 ; coluna < 5; coluna++)
        {
            printf("[ %d ] ", matriz[linha][coluna]);
        }
        printf("\n");
    }


    return 0;
}
