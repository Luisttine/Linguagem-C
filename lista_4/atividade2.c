#include <stdio.h>
#include <time.h>


int main(){

    int matriz[4][4], l, c, i, somal=0, somac=0;

    for(int linha = 0 ; linha < 4; linha++)
    {
        for(int coluna = 0 ; coluna < 4; coluna++)
        {
		matriz[linha][coluna] = rand()%21;
        }
    }
    for(int linha = 0 ; linha < 4; linha++)
    {
        for(int coluna = 0 ; coluna < 4; coluna++)
        {
            printf("[ %d ] ", matriz[linha][coluna]);
        }
        printf("\n");
    }

    printf("\nDigite a linha desejada: ");
    scanf("%d", &l);
    
    for(i=0;i<4;i++){
        printf("[ %d ] ",matriz[l-1][i]);
        somal = somal+matriz[l-1][i];}
    printf("\nA soma da linha informada é: %d", somal);
    printf("\n\nDigite a coluna desejada: ");
    scanf("%d", &c);
    for(i=0;i<4;i++){
        printf("[ %d ] \n",matriz[i][c-1]);
        somac = somac+matriz[i][c-1];}
    printf("A soma da linha informada é: %d\n", somac);
    
    printf("\nA matriz transposta é a seguinte: \n");
    for(int linha = 0 ; linha < 4; linha++)
    {
        for(int coluna = 0 ; coluna < 4; coluna++)
        {
            
            printf("[ %d ] ", matriz[coluna][linha]);
        }
        printf("\n");
    }

    return 0;
}
