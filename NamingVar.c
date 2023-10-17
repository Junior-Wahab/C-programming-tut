// declare a variable
#include <stdio.h>
int main() {
  int _a = 7;
  int var = 8;
  int _a_var = 10;

  // Type of constant
  // inter constant
  // real constant
  // character constanct
  int number = 7;
  char character = 'c';
  float floatin = 1.74;

  // Never select a part of program and run run/execute it.
  // printf is used to print a value on the screen.
  // %d - integers, %f - floating numbers, %c - characters.

  int intger = 4;
  float floating = 1.23;
  char chara = 'c';
  printf("This is an integer %d\n", intger);
  printf("This is a float %f\n", floating);
  printf("This is a character %c\n", chara);

  // scanf - a function library its used to take input from the user.
  // location address of b = &b.
  printf("Enter your number\n");
  int b;
  scanf("%d", &b);
  printf("Your number is %d", b);

  // Area of a rectangle
  int length = 4;
  int width = 3;
  printf("The area of a rectangle is %d", length * width);

  // 3 Types of instructions in c.
  //   Type declaration instruction, arithmetic instruction, control instruction
  // 1. Typeinstruction
  int c = 2;
  float b = 1.0;

  // other variation - declared together
  int i = 10;
  int f = 2;

  int a, b, c, d;
  a = b = c = d = 30;

  // 2. Arithmetic instruction
  int a = 3;
  int c = 3;
  int z = a * c;

  // Type convention
  // int and int = int, int and float = float, float and float = float
  // int a = 3.5; - demoted to 3
  // float a = 8; - promoted to float 8.0
  /*
  int k = 3.0/9; - since k is an int and can't store a floating number the value
  0.33 is demoted to 0
  */

  // Operator precedence
  // 1st * / %, 2nd + -, 3rd =

  /* Operator associativity - defines the order in which the operators of
   same precedence will be evaluated in an expression */

  int x = 9 / 3 * 27 - 5;
  /*   when operators of equal priority are present in an expression the  tie is
   * taken care of by associativity*/

  // 3. Control instructions
  /*  four types of control instructions - sequence control, decision control -
   * if else , loop control - while loop ect, case control - switch case */

  /* Four major types of data types in C - int, float - single precicison
   * floating point number, char - storing charater in single coats('A',
   * "A"-invalid), double - double precision floating point number */

  // Conditional statement
  // Decision making instructions - if else statement, switch statement
  //  if else
  int x = 4;
  if (x > 5) {
    printf("a is greater than 5");
  } else {
    printf("a is not greater than 5");
  }

  // if, else if, else
  int age = 45;
  int placecode = 12;
  if (age > 18) {
    printf("Your eligible to drive");
  } else if (age < 15) {
    printf("You are nt eligible to drive");
  } else {
    printf("Sorry you are a kid and can not drive");
  }

  // ternary operator
  int a = 5;
  int b = 6;
  int c = 8;
  int result = a < b && b < c ? printf("True") : printf("flase");

  /* switch case - is used when you have to make a choice between number of
  alternatives for a given variable */
  int ages = 24;
  switch (age) {
  case 24:
    printf("You are 24 years old");
    break;

  case 26:
    printf("You are 26 years old");
    break;

  default:
    printf("Print default");
    break;
  }

  // find gratest of four numbers enetered by a user
  int a, b, c, d;
  printf("Enter first number");
  scanf("%d", &a);

  printf("Enter second number");
  scanf("%d", &b);

  printf("Enter thrid number");
  scanf("%d", &c);

  printf("Enter fourth number");
  scanf("%d", &d);

  if (a > b && a > c && a > d) {
    printf("The greatest number is %d\n", a);
  } else if (b > a && b > c && b > d) {
    printf("The greatest number is %d \n", b);
  } else if (c > a && c > b && c > d) {
    printf("The greatest number is %d \n", c);
  } else if (d > a && d > b && d > c) {
    printf("The greatest number is %d \n", d);
  } else {
    printf("They are all equal");
  }

  // Loops: an instruction that repeats until a specific condition is reached.
  // while loop: commonly used when the number of iterations is unkown to the
  // user ahead of time
  int i = 0;
  while (i < 34) {
    printf("The value of i is %d\n", i);
    i++;
  }

  /* do while loop: This loop will execute the code block once, before checking
  if the condition is true, then it will repeat the loop as long as the
  condition is true. */
  int i = 1;
  do {
    printf("The value of i is %d", i);
  } while (i < 5);

  // for loop:
  for (int i = 0; i < 5; i++)
  {
    printf("The value of i is %d\n", i);
  }
   

  return 0;
}
