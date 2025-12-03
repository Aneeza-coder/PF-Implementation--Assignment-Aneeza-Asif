#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5;
    int total;
    float average;
    printf("Enter marks of subject 1:");
    scanf("%d",&sub1);
    printf("Enter marks of subject 2:");
    scanf("%d",&sub2);
    printf("Enter marks of subject 3:");
    scanf("%d",&sub3);
    printf("Enter marks of subject 4:");
    scanf("%d",&sub4);
    printf("Enter marks of subject 5:");
    scanf("%d",&sub5);
    total=sub1+sub2+sub3+sub4+sub5;
    average=total/5.0;
    printf("subject 1:%d\n",sub1);
    printf("subject 1:%d\n",sub2);
    printf("subject 1:%d\n",sub3);
    printf("subject 1:%d\n",sub4);
    printf("subject 1:%d\n",sub5);
    printf("\nTotalMarks:%d\n",total);
    printf("Average :%.2f\n",average);
    return 0;
}
