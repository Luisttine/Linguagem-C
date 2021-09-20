#include <stdio.h>

// FUNÇÃO DA QUESTÃO 1

int primo(int x){
    int k, c;
    c = 0;
    for(k = 1; k<=x; k++){
        if (x%k == 0){
            c++;
        }
    }
    if (c == 2){
        return 1;
    }
    else {
        return 0;
    }
}

// FUNÇÃO DA QUESTÃO 2

int somaprimo(int x){
    int k1,k2,s;
    s = 0;
    k2 = 0;
    for(k1 = 1; k1<=x; k1++){
        while(1){
            k2++;
            if (primo(k2) == 1){
                if (k1 == 1){
                    printf("%d",k2);
                }
                else {
                    printf(" + %d",k2);
                }
                s += k2;
                break;
            }
        }
    }
    return s;
}

// FUNÇÃO DA QUESTÃO 3

int divisores(int x){
    int k, c;
    c = 0;
    for(k = 1; k<=x; k++){
        if (x%k == 0){
            c++;
        }
    }
    return c;
}

// FUNÇÃO DA QUESTÃO 4

int triangulo(int x, int y,int z){
    if ((x>=y+z) || (y>=z+x) || (z>=x+y)){
        printf("Nao eh possivel formar um triangulo");
    }
    else{
        if ((x == y) && (y == z) && (z == x)){
            printf("O triangulo eh equilatero");
        }
        else {
            if ((x == y) || (y == z) || (z == x)){
            printf("O triangulo eh isoceles");
            }
            else {
                printf("O triangulo eh escaleno");
            }
        }
    }
}

// FUNÇÃO DA QUESTÃO 5

int fatorial(int x){
    int f, k;
    f = 1;
    for(k=1;k<=x;k++){
        f = f * k;
    }
    return f;
}

// FUNÇÃO DA QUESTÃO 6

int fatrec(int x){
  if (x == 0) {
    return 1;
  }
  else {
    int f;
    f = x * fatrec(x-1);
    return f;
  }
}

// FUNÇÃO DA QUESTÃO 7

int potencia(int x, int z){
    if (z==0){
        return 1;
    }
    else{
        int p;
        z--;
        p = x * potencia(x, z);
        return p;
    }
}

// FUNÇÕES DA QUESTÂO 8

int ler () {
    int x;
    printf ("Digite um numero inteiro positivo para multiplicar: ");
    scanf ("%d", &x);
    return x;
}
int multiplicar (int x, int y) {
    return x * y;
}
int imprimir (int x, int y, int z) {
    printf ("%d multiplicado por %d eh igual a %d",x,y,z);
}

// FUNÇÃO DA QUESTÃO 9

int par (x) {
    if (x % 2 == 0){
        return 1;
    }
    else {
        return 0;
    }
}

// FUNÇÃO MAIN

int main(){

    //EXECUÇÃO DA QUESTÃO 1

    int prim, n;
    printf("Digite um numero para saber se ele e primo: ");
    scanf("%d",&n);
    prim = primo(n);
    if (prim == 1){
        printf("%d eh primo!\n\n", n);
    }
    else{
        printf("%d nao eh primo!\n\n", n);
    }

    // EXECUÇÃO DA QUESTÃO 2

    int n2,s;
    printf("Digite a quantidade de numeros impares iniciais para ser somado: ");
    scanf("%d",&n2);
    s = somaprimo(n2);
    printf(" = %d \n\n",s);

    // EXECUÇÃO DA QUESTÃO 3

    int n3, d;
    printf("Digite um numero para saber quantos divisores ele possui: ");
    scanf("%d",&n3);
    d = divisores(n3);
    printf("%d possui %d divisores \n\n",n3,d);

    // EXECUÇÃO DA QUESTÃO 4

    int a, b, c;
    char t;
    printf("Digite o valor do primeiro lado do triangulo: ");
    scanf("%d",&a);
    printf("Digite o valor do segundo lado do triangulo: ");
    scanf("%d", &b);
    printf("Digite o valor do terceiro lado do triangulo:: ");
    scanf("%d",&c);
    t = triangulo(a,b,c);
    printf("\n\n");

    // EXECUÇÃO DA QUESTÃO 5

    int n4, fat;
    printf("Digite um numero para saber seu fatorial: ");
    scanf("%d",&n4);
    fat = fatorial(n4);
    printf("fat(%d) = %d \n\n",n4,fat);

    // EXECUÇÃO DA QUESTÃO 6

    int n5, f;
    printf("Digite um numero para saber seu fatorial: ");
    scanf("%d",&n5);
    f = fatrec(n5);
    printf("fat(%d) = %d \n\n",n5,f);

    // EXECUÇÃO DA QUESTÃO 7

    int n6, n7, p;
    printf("Digite um numero inteiro: ");
    scanf("%d",&n6);
    printf("Digite uma potencia: ");
    scanf("%d",&n7);
    p = potencia(n6,n7);
    printf ("%d elevado a %d eh: %d \n\n", n6, n7, p);

    // EXECUÇÃO DA QUESTÃO 8

    int m, n8, n9;
    n8 = ler();
    n9 = ler();
    m = multiplicar (n8,n9);
    imprimir (n8, n9, m);
    printf("\n\n");

    // EXECUÇÃO DA QUESTÃO 9

    int n10, pa;
    printf ("Digite um numero para saber se ele e par ou impar: ");
    scanf ("%d", &n10);
    pa = par(n10);
    if (p == 1){
        printf ("O numero %d eh par \n\n", pa);
    }
    else {
        printf ("o numero %d eh impar \n\n", pa);
    }
}