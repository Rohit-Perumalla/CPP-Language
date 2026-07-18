#include <iostream>
#define PI 3.14
using namespace std;
double circle(double r)
{
    return PI * r * r;
}
double tri(double i, double j)
{
    return (1 * i * j) / 2;
}
double rec(double i, double j)
{
    return i * j;
}
int main()
{
    double i, j;
    int choice;
    cout << "\n1.circle\n";
    cout << "2.triangle\n";
    cout << "3.rectangle\n";
    cout << "choose one choice:";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "enter radius: ";
        cin >> i;
        cout << "area is  " << circle(i);
        break;
    case 2:
        cout << "enter base:";
        cin >> i;
        cout << "enter height:";
        cin >> j;
        cout << "area is " << tri(i, j);
        break;
    case 3:
        cout << "enter lenght: ";
        cin >> i;
        cout << "enter breath: ";
        cin >> j;
        cout << "area is " << rec(i, j);
        break;
    default:
        cout << "not exist number .";
    }

    return 0;
}