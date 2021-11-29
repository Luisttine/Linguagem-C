//Nomes: Luís Souza, Kaua Rennó  Turma: 1ºADS

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

//ATIVIDADE 1

int main (){
    int i, tam;
    char frase[100];

    do{
        printf("Digite uma frase: ");
        gets(frase);

    }while(strlen(frase)>40);

    for(i=0;i<=strlen(frase);i++){
        printf("\n%c",frase[i]);
    }

    return 0;
}


//ATIVIDADE 2

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


//ATIVIDADE 3


int main(){

    char palavra[30];
    int i, tam, diferentes = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tam = strlen(palavra);
    tam--;
    i = 0;

    while(tam >= i){
        if(palavra[i] != palavra[tam])
            diferentes ++;
        i++;
        tam--;
    }

    if(diferentes == 0)
        printf("\n1");
    else
        printf("\n0");

    return 0;
}

//ATIVIDADE 4


int main (){

    int v=0, c=0, eb=0, i=0, k=0;
    char nome[100], quebrado[100], troca, name[100];
    gets(nome);
    nome[i] = tolower(nome[i]);

    for(i=0;nome[i]!='\0';i++){
       if(nome[i]=='a'  nome[i]=='i'  nome[i]=='u'  nome[i]=='e'  nome[i]=='o'){
            v = v + 1;
        }
        else{
            if(nome[i]==' '){
                eb = eb + 1;
            }
            else{
                c = c + 1;
            }
        }
        if(nome[i]!='a' && nome[i]!='i' && nome[i]!='u' && nome[i]!='e' && nome[i]!='o' && nome[i]!=' '){
            quebrado[k]= nome[i];
            k++;
        }
    }
    printf("Seu Nome Possui %d caracteres\n", i);
    printf("Seu Nome Possui %d vogais\n", v);
    printf("Seu Nome Possui %d consoantes\n", c);
    printf("Seu Nome Possui %d espaços em branco\n", eb);
    printf("Seu nome sem vogais e sem espaços em branco %s \n", quebrado);

    scanf("%s", &troca);

    for(i=0;nome[i]!='\0';i++){
        if(nome[i]==troca){
            name[i] = '';
        }
        else{
            name[i] = nome[i];
        }
    }
    printf("%s", name);
}
