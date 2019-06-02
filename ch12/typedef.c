#include <stdio.h>

struct complex_struct {
  double real;
  double imag;
};

struct item {
  unsigned int list:1;
  unsigned int seen:1;
  unsigned int number:14;
};

int main() {
  typedef int group[10];
  group totals;
  int i;
  for (i = 0; i < 10; i++)
    totals[i] = 0;
  typedef struct complex_struct complex;
  complex voltag1 = {3.5, 1.2};
  printf("%f, %f\n", voltag1.real, voltag1.imag);
  return 0;
}

