#include <stdio.h>
int array[10];
int main() {
  int *data_ptr;
  int value;

  data_ptr = &array[0];
  value = *data_ptr++; /* Get element #0 */
  value = *++data_ptr; /* Get element #2 */
  value = ++*data_ptr; /* Increment element #2 */
  return 0;
}
