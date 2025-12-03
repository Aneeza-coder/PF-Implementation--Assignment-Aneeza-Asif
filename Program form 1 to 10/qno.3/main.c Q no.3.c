#include<stdio.h>
int main()
{
    int a,b,temp;
    a=12;
    b=9;
    temp=a;
    a=b;
    b=temp;
    printf("The value of a is:%d\n",a);
    printf("The value of b is:%d\n",b);
    return 0;
    
}