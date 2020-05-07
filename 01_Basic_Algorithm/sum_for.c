// Returns sum of all integers from 1 to n (with for-loop)
#include <stdio.h>

int main(void) {
  int i, n;
  int sum;
  puts("Returns sum of all integers from 1 to n.");
  printf("n = ");
  scanf("%d", &n);

  sum = 0;
  for(i = 1; i <= n; i++)
    sum += i;
    
  printf("Sum of all integers from 1 to %d = %d\n", n, sum);
  
  return 0;
}
