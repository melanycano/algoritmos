#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  printf("Hello world!\n");
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int p = a * b;
  int q = a / b;
  int r = a % b;
  printf("%d * %d = %d\n", a, b , p);
  printf("%d / %d = %d\n", a, b, q);
  printf("%d %% %d =%d\n", a, b, r);
  printf("%d = %d * %d + %d\n", a, b, q, r);
  return 0;
}
