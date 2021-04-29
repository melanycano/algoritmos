#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int year = atoi(argv[1]);
  bool esBisiesto = false;
  esBisiesto = (year % 4 == 0);
  esBisiesto = esBisiesto && (year % 100 != 0);
  esBisiesto = esBisiesto || (year % 400 == 0);

  printf("%s\n", esBisiesto ? "es bisiesto" : "no es bisiesto");

  return 0;
}
