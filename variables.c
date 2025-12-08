#include <stdio.h>

int main () {
  int age = 21;
  printf("I am %d years old.\n", age);

  age = 32;
  printf("I am %d years old.\n", age);

  int var1, var2 = 21;
  printf("var2 is %d\n", var2);
  printf("var1 is %d\n", var1); // var1 is uninitialized, may contain garbage value

  double pi = 3.14;
  printf("Value of pi is %lf\n", pi);

  float e = 2.71828;
  printf("Value of e is %f\n", e);

  char grade = 'A';
  printf("Grade is %c\n", grade);

  return 0;
}