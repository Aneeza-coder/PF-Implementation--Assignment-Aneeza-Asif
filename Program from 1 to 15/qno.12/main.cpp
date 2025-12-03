#include<iostream>
using namespace std;
int main()
{
    const float PI=3.1416;
    float radius, height, volume;
    cout<<"Enter radius of cylinder: ";
    cin>>radius;
    cout<<"Enter height of cylinder: ";
    cin>>height;
    volume=PI*radius*radius*height;
    cout<<"The volume of cylinder is "<<volume<<endl;
    return 0;
}