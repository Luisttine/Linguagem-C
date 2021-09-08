#include <stdio.h>
#include <stdbool.h>

bool ePrimo(int n ,int nn);

int main(void)
{
  int n = 0;

  printf("Número: ");
  scanf("%d" ,&n);
  if (ePrimo(n ,1))
    printf("%d e primo!" ,n);
  else
    printf(" %d nao e primo! \n" ,n);

  return 0;
}

bool ePrimo(int n ,int nn)
{
  static int divs = 0;

  if (nn > n)
    return n;

  if (n % nn == 0)
    divs++;

  ePrimo(n ,nn + 1);

  if (divs <= 2)
    return 1;
  return 0;
}
