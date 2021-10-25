#include <stdio.h>
#include <string.h>

int main() {

	char str[100];
	
	printf("Digite uma string de até 100 caracteres: ");
	gets(str);
	printf("/n/nVocê digitou: %s", str);

}
