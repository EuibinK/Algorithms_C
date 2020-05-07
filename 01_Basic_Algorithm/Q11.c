// returns number of digits
#include <stdio.h>

int main(void) {
  int n;
  printf("n = ");
  scanf("%d", &n);
  
  int temp = n;
  int digit = 0;
  while(temp % 10 != 0) {
    digit++;
    temp /= 10;
  }

  printf("%d is %d digit number.\n", n, digit);
  return 0;
}
