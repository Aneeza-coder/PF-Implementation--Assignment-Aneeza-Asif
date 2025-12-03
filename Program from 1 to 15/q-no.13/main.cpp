#include<iostream>
#define PI 3.1416
using namespace std;
int main()
{
    float radius,area;
    cout<<"Enter the radius: ";
    cin>>radius;
    area=PI*radius*radius;
    cout<<"The area of circle is: "<<area<<endl;
    return 0;
}