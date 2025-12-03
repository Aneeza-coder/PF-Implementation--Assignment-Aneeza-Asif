#include<stdio.h>
#include<math.h>
int main()
{
    double num = 15.58971;
    int integral;
    double fractional;
    integral=(int)num;
    fractional=num-integral;
    printf("Number=%.5\n",num);
    printf("Integral part=%d\n",integral);
    printf("Fractional part=%.5\n",fractional);
    return 0;
}