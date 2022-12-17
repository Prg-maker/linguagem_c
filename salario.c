#include <stdio.h>

int main(){
  int employee_number ;
  int hours;
  float hours_per_week;
  float result;

  scanf("%d", &employee_number);
  scanf("%d", &hours);
  scanf("%f", &hours_per_week);
  result = hours_per_week * hours;


  printf("NÚMERO = %d\n" , employee_number);
  printf("SALÁRIO = U$ %.2f\n" , result);
  return 0;
}