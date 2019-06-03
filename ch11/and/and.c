#include <stdio.h>

int main() {
  int i1, i2;

  i1 = 3;
  i2 = 3;

  if ((i1 != 0) && (i2 != 0))
    printf("Both are not zero\n");

  if (i1 && i2)
    printf("Both are not zero");
  return 0;
}
