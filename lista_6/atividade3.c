#include <conio.h>
#include <stdio.h>

int main( ) { 
    int i=3, j=5, k, l, resultado;
    int *p, *q;
    
    p = &i;
    q = &j;
    resultado=(12 + *p)/(*q+7); 
    k = *q-*p;
    
    printf ("p:%p\n",p);
    printf ("k:%d\n",k);
    printf ("resultado:%d", resultado);

}   
