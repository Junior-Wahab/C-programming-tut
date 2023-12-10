#include <stdio.h>
int main() {
  int a = 80;
  int j = 30;
  /*
  Pointers (pointer variables) are special variables that are used to store
  addresses rather than values.
  int *j; - declare a variable j of type int pointer(j is a pointer)
    j = &a - store address of i in j;
  */

  printf("The address of a is %u", &a);
  printf("The address of j is %u", *(&j));

  int i = 80;  /*  */
  int *j = &i; /* store i address in j */

  return 0;
}