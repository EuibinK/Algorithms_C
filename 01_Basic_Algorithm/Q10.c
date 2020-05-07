// Returns b - a but asks for b until b > a
#include <stdio.h>

int main(void) {
  int a, b;
  
  printf("a = ");
  scanf("%d", &a);

  do {
    printf("b = ");
    scanf("%d", &b);
    if(b <= a)
      printf("b must be greater than a.\n");
  } while (b <= a);

  printf("b - a = %d\n", b - a);
  return 0;
}
