#include <stdio.h>
#define DATA_MAX 1024

union value {
  long int i_value;
  float f_value;
} data;

struct open_msg {
  char name[30];
};

struct read_msg {
  int length;
};

struct write_msg {
  int length;
  char data[DATA_MAX];
};

struct close_msg {

};

const int OPEN_CODE = 0;
const int READ_CODE = 1;
const int WRITE_CODE = 2;
const int CLOSE_CODE = 3;

struct msg {
  int msg;
  union {
    struct open_msg open_data;
    struct read_msg read_data;
    struct write_msg write_data;
    struct close_msg close_data;
  } msg_data;
};

int i;
float f;
int main() {
  data.f_value = 5.0;
  data.i_value = 3;
  i = data.i_value;
  f = data.f_value;
  data.f_value = 5.5;
  i = data.i_value;
  printf("%f\n", data.f_value);
  printf("%d\n", i);
  return 0;
}

