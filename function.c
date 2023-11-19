#include <stdio.h>

int add(int a, int b) {
  int result = a + b;
  return result;
}

// function with no return value
void print_int(a);

// function prototype
int sum(int, int);

int main() {
  add(4, 5);
  printf("Output %d", add);

  printf("The value of 5 + 7 is %d\n", sum(5, 7));

  print_int(5);
  return 0;
}

int sum(int a, int b) { return a + b; }

void print_int(a) { printf("Print  value %d\n", print_int); }