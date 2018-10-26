#include <stdio.h>
void inc_count(int *count_ptr) {
  (*count_ptr)++;
}

int main() {
  int count = 0;

  while (count < 10) {
    inc_count(&count);
    printf("%d\n", count);
  }

  const int result = 5;
  // result = 10;
  const char *answer_ptr = "Forty-Two";
  answer_ptr = "Fifty-One";
  // *answer_ptr = 'X';

  char *const name_ptr = "Test";
  name_ptr[0] = 'B';
  // name_ptr = "New";
  printf("%s\n", name_ptr);
  return 0;
}
