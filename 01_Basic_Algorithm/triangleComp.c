#include <stdio.h>

void triangleLB (int n);
void triangleLU (int n);
void triangleRU (int n);
void triangleRB (int n);

int main(void) {
  int n;
  do {
    printf("# of lines = ");
    scanf("%d", &n);
  } while(n <= 0);
  
  int option;
  
  do {
    printf("option = ");
    scanf("%d", &option);
  } while (option < 1 || option > 4);

  if(option == 1)
    triangleLB(n);
  else if(option == 2)
    triangleLU(n);
  else if(option == 3)
    triangleRU(n);
  else
    triangleRB(n);

  return 0;
}

void triangleLB (int n) {
  int i, j;
  for(i = 1; i <= n; i++) {
    for(j = 1; j <= i; j++)
      putchar('*');
    putchar('\n');
  }
}

void triangleLU (int n) {
  int i, j;
  for(i = 1; i <= n; i++) {
    for(j = n; j >= i; j--)
      putchar('*');
    putchar('\n');
  }
}

void triangleRU (int n) {
  int i, j, k;
  for(i = 0; i < n; i++) {
    for(k = 0; k < i; k++)
      putchar(' ');
    for(j = n; j > i; j--)
      putchar('*');
    putchar('\n');
  }
}

void triangleRB (int n) {
  int i, j, k;
  for(i = 0; i < n; i++) {
    for(k = n; k > i; k--)
      putchar(' ');
    for(j = 0; j <= i; j++)
      putchar('*');
    putchar('\n');
  }
}
