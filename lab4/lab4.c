#include <stdio.h>
int main() {
  char name_id[11];
  int hours;
  float rate, salary;

  printf("Input the Employees ID(Max. 10 chars):\n");
  scanf("%s", name_id);

  printf("Input the working hrs:\n");
  scanf("%d", &hours);

  printf("Salary amount/hr:\n");
  scanf("%f", &rate);

  salary = hours * rate;

  printf("Em[loyees ID = %s\n", name_id);
  printf("Salaly = U$ %.2f\n", salary);

  return 0;
}