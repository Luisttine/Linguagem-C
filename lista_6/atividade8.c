#include <stdio.h>

int main (){

    int a=100, b=200, temp;
    temp = b;
    b = a;
    a = temp;
    
    printf("Eles agora valem %d %d", a, b);
}
