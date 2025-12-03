#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    float rupees=12000;
    float dollars;
    dollars=rupees/60;
    cout<<fixed<<setprecision(2);
    cout<<"Amount in rupees: "<<rupees<<endl;
    cout<<"Amount in dollars: "<<dollars<<endl;
    return 0;
}