#include<stdio.h>
int main()
{
  int vi,a,t;
  float s;
  vi=10;
  a=2;
  t=5;
  s=vi*t+0.5*a*t*t;
  printf("Initial velocity(vi)=%\n",vi);
  printf("Time(t)=%d\n",t);
  printf("Acceleration(a)=%d\n",a);
  printf("Displacement(s)=%.2f\n",s);
  return 0;
}
  