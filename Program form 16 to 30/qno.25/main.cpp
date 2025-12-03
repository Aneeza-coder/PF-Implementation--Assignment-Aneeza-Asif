#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,area,s;
    cout<<"Ehter three sides of triangle:\n";
    cin>>a >> b>> c;
    s=(a+b+c)/2.0;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"Area of the triangle: "<<area;
    return 0;
}