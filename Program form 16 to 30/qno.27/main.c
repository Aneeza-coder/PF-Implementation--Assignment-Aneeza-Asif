#include<stdio.h>
int main()
{
    int a,b,c,disc;
    printf("Enter values of a,b and c:");
    scanf("%d %d %d",&a,&b,&c);
    disc=(b*b)-(4*a*c);
    printf("Discriminant(disc)=%d\n",disc);
    return 0;
}