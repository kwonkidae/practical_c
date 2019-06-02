#include <stdio.h>

struct bin {
  char name[30];
  int  quantity;
  int  cost;
} printer_cable_bin = {
  "Printer Cables",
  0,
  1295
};

int main() {
  printer_cable_bin.cost = 1295;
  printf("%s\n", printer_cable_bin.name);
  return 0;
}
