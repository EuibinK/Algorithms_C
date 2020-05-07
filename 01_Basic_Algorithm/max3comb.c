#include <stdio.h>

// Find the maximum of a, b, c
int max3(int a, int b, int c) {
  int max = a;
  if(b > max) max = b;
  if(c > max) max = c;
  return max;
}

int main(void) {
  printf("max3(%d, %d, %d) = %d\n", 3, 2, 1, max3(3,2,1)); // a > b > c
  printf("max3(%d, %d, %d) = %d\n", 3, 2, 2, max3(3,2,2)); // a > b = c
  printf("max3(%d, %d, %d) = %d\n", 3, 1, 2, max3(3,1,2)); // a > c > b
  printf("max3(%d, %d, %d) = %d\n", 3, 2, 3, max3(3,2,3)); // a = c < b
  printf("max3(%d, %d, %d) = %d\n", 2, 1, 3, max3(3,2,1)); // c > a > b
  printf("max3(%d, %d, %d) = %d\n", 3, 3, 2, max3(3,2,1)); // a = b > c
  printf("max3(%d, %d, %d) = %d\n", 3, 3, 3, max3(3,2,1)); // a = b = c
  printf("max3(%d, %d, %d) = %d\n", 2, 2, 3, max3(3,2,1)); // c > a = b
  printf("max3(%d, %d, %d) = %d\n", 2, 3, 1, max3(3,2,1)); // b > a > c
  printf("max3(%d, %d, %d) = %d\n", 2, 3, 2, max3(3,2,1)); // b > a = c
  printf("max3(%d, %d, %d) = %d\n", 1, 3, 2, max3(3,2,1)); // b > c > a
  printf("max3(%d, %d, %d) = %d\n", 2, 3, 3, max3(3,2,1)); // b = c > a
  printf("max3(%d, %d, %d) = %d\n", 1, 2, 3, max3(3,2,1)); // c > b > a
  return 0;
}
