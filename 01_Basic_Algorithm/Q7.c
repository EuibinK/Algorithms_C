#include <stdio.h>

int main(void) {
  int i, n;

  printf("n = ");
  scanf("%d", &n);

  int sum = 0;
  for(i = 1; i <= n; i++) {
    if(i != n)
      printf("%d + ", i);
    else
      printf("%d = ", i);
    sum += i;
  }
  printf("%d\n", sum);

  return 0;
}
