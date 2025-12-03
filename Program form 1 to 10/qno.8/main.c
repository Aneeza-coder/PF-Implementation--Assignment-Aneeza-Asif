#include<stdio.h>
int main()
{
    float celsius,fahrenheit;
    printf("Enter the temperature in fahrenhiet:");
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit-32)*5/9;
    printf("%.2f fahrenheit=%.2f celsius\n",fahrenheit,celsius);
    return 0;
}