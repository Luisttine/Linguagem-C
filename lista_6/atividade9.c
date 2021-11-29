#include<stdio.h>
#include<string.h>
#include<assert.h>

char* concatenar(char *s1, char *s2) {
    int i, j;

    for (i = 0; s1[i] != '\0'; ++i);
    for (j = 0; s2[j] != '\0'; ++j, ++i) {
        s1[i] = s2[j];
    }
    s1[i] = '\0';
    printf("%s", s1);
}

int main() {

    char str1[200], str2[200];
    scanf("%s", str1);
    scanf("%s", str2);
    
    concatenar(str1, str2);
    

    return (0);
}
