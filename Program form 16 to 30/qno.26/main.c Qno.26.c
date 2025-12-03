#include<stdio.h>
int main()
{
   int hours,minutes,seconds,totalSeconds;
   printf("Enter time(hours,minutes,seconds):");
   scanf("%d %d %d",&hours,&minutes,&seconds);
   totalSeconds=(hours*3600)+(minutes*60)+seconds;
   printf("Total time in seconds= %d\n",totalSeconds);
   return 0;
}
