 #include <stdio.h>
#include <string.h>

int main() {

	char str[100];

	printf("Digite uma string de até 100 caracteres: ");
	gets(str);
	size = strlen(str);
	for(i=size-1;i>=0;i--)
		printf("\n%s", str[i]);


}
