// Returns sum of all integers from 1 to n. (only takes if n > 0)
#include <stdio.h>

int main(void) {
  int i, n;
  int sum;
  puts("Returns sum of all integers from 1 to n.");
  
  do {
    printf("n = ");
    scanf("%d", &n);
  } while (n <= 0);

  sum = 0;
  for(i = 1; i <= n; i++)
    sum += i;

  printf("Sum of all integers from 1 to %d = %d", n, sum);
  return 0;
}
