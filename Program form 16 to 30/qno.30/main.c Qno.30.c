#include<stdio.h>
int main()
{
  int age_in_years=25;
  int age_in_months,age_in_days;
  age_in_months=age_in_years*12;
  age_in_days=age_in_years*365;
  printf("Age in months is:%d",age_in_months);
  printf("Age in days is:%d",age_in_days);
  return 0;
}