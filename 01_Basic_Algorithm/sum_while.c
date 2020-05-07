// Returns sum of 1~n.
#include <stdio.h>

int main(void) {
  int i, n;
  int sum;
  puts("Will return sum of all integers from 1 to n.");
  printf("n: ");
  scanf("%d", &n);

  sum = 0;
  i = 1;
  while(i <= n) {
    sum += i;
    i++;
  }
  printf("Sum of all integers from i to %d = %d.\n", n, sum);
  return 0;
}
