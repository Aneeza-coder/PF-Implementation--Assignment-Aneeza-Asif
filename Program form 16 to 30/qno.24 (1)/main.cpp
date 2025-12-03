#include <iostream>
using namespace std;

int main() {
    int sub1, sub2, sub3, sub4, sub5;
    int total, average;

    cout << "Enter marks of subject 1(out of 100): ";
    cin >> sub1;

    cout << "Enter marks of subject 2(out of 100): ";
    cin >> sub2;

    cout << "Enter marks of subject 3(out of 100): ";
    cin >> sub3;

    cout << "Enter marks of subject 4(out of 100): ";
    cin >> sub4;

    cout << "Enter marks of subject 5(out of 100): ";
    cin >> sub5;

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    average = total / 5;

    cout << "Total marks: " << total << endl;
    cout << "Average: " << average << endl;

    return 0;
}
