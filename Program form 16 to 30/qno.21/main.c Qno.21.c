#include<stdio.h>
int main()
{
    char name [50];
    int age;
    float height;
    char gender;
    printf("Enter student name:");
    scanf("%s",&name);
    printf("Enter student age:");
    scanf("%d",&age);
    printf("Enter student height:");
    scanf("%f",&height);
    printf("Enter students gender(M/F): ");
    scanf("%c",&gender);
    printf("\n---student Information---\n");
    printf("Name :%s\n",name);
    printf("Age :%d\n",age);
    printf("height :%.2fcm/n",height);
    printf("Gender :%c\n",gender);
    return 0;
}