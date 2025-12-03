#include<stdio.h>
int main()
{
    float millimeter,inches;
    printf("Enter length in millimeters:");
    scanf("%f",&millimeter);
    inches=millimeter/25.4;
    printf("%.2f millimeter= %.2finches\n",millimeter,inches);
    return 0;
}
