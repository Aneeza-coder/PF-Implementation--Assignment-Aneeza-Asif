#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,disc;
    cout<<"Enter the values of a,b and c:\n";
    cin>>a>>b>>c;
    disc=(b*b)-(4*a*c);
    cout<<"Discriminant="<<disc;
    return 0;
}