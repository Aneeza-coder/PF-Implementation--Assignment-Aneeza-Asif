#include<stdio.h>
int main()
{
    const float PI=3.1416;
    float radius , height,volume;
    printf("Enter radius of cylinder:");
    scanf("%f",&radius);
    printf("Enter height of cylinder:");
    scanf("%f",&height);
    volume=PI*radius*radius*height;
    printf("The volume of cylinder is:%2f\n",volume);
    return 0;
}