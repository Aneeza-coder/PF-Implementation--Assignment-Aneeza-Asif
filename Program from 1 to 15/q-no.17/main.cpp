#include<iostream>
using namespace std;
int main()
{
    double num=15.58971;
    int integral;
    double fractional;
    integral=(int)num;
    fractional=num-integral;
    cout<<"integral part: "<<integral<<endl;
    cout<<"fractionall part: "<<fractional<<endl;
    return 0;
}