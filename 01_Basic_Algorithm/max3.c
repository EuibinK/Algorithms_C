#include <stdio.h>

int main(void) {
  int a, b, c;
  int max;
  printf("Finding maximum of three integers.\n");
  printf("a = "); scanf("%d", &a);
  printf("b = "); scanf("%d", &b);
  printf("c = "); scanf("%d", &c);

  max = a;
  if(b > max) max = b;
  if(c > max) max = c;

  printf("Maximum = %d.\n", max);
  
  return 0;
}
