#include <stdio.h>

int main() {
  int age;
  scanf("%d", &age);
  printf("You are %d years old.\n", age);

  double pi;
  scanf("%lf", &pi);
  printf("Value of pi is %lf\n", pi);

  float gpa;
  scanf("%f", &gpa);
  printf("Your GPA is %f\n", gpa);

  char name;
  scanf("%c", &name);
  printf("Your initial is %c\n", name);

  double number1, number2;
  scanf("%lf %lf", &number1, &number2);
  printf("You entered: %lf and %lf\n", number1, number2);

  return 0;
}