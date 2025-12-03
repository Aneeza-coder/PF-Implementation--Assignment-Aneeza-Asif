#include<stdio.h>
int main()
{
    int totalmarks;
    float Average;
    int rollno,sub1,sub2,sub3;
    printf("Enter marks of first subject(PF): ");
    scanf("%d",&sub1);
    printf("Enter marks of Second subject(IC):");
    scanf("%d",&sub2);
    printf("Enter marks of Third subject(CG): ");
    scanf("%d",&sub3);
    totalmarks=sub1+sub2+sub3;
    Average=totalmarks/3.0;
    printf("The total marks is:%d",totalmarks);
    printf("The Average  is:%.2f",Average);
    return 0;
}

