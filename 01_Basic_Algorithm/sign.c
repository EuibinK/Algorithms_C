// Returns sign of input value
#include <stdio.h>

int main(void) {
  int n;

  printf("Enter an integer: ");
  scanf("%d", &n);

  if(n > 0)
    printf("Positive.\n");
  else if(n < 0)
    printf("Negative.\n");
  else
    printf("0.\n");

  return 0;
}
