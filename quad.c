#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
  double a = atof(argv[1]);
  double b = atof(argv[2]);
  double c = atof(argv[3]);
  printf("a: %.2f\n", a);
  printf("b: %.2f\n", b);
  printf("c: %.2f\n", c);
  double disc = (b * b) - (4 * a * c);
  double raiz = sqrt(disc);
  printf("disc: %.2f, raiz: %.2f\n", disc, raiz);
  double r1 = (-b + raiz) / (2 * a);
  double r2 = (-b - raiz) / (2 * a);
  printf("r1: %.2f, r2: %.2f\n", r1, r2);
  return 0;
}
