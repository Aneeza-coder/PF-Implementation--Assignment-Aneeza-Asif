#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, max;
    cout<<"Enter first numbers :";
    cin>>a;
    cout<<"Enter second numbers :";
    cin>>b;
    cout<<"Enter third numbers :";
    cin>>c;
    cout<<"Enter fourth numbers :";
    cin>>d;
    max=a;
    if(b>max)
    max=b;
    if(c>max)
    max=c;
    if(d>max)
    max=d;
    cout<<"the maximum number is: " << max<<endl;
    return 0;
}