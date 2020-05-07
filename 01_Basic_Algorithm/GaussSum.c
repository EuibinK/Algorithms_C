#include <stdio.h>

int main(void) {
  int i, n;
  
  printf("n = ");
  scanf("%d", &n);

  int sum = 0;

  if(n % 2 == 0)
    sum = (1 + n) * n / 2;
  else
    sum = (1 + n + 1) * (n + 1) / 2 - (n + 1);

  printf("Sum = %d", sum);

  return 0;
}

// 1 ~ 10 => 11 * 5
// 1 ~ 9 => 10 * 4 + 5
