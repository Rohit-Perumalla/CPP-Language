#include <iostream>
using namespace std;
#define PI 3.14
int volume(int a)
{
    return a * a * a;
}
double volume(double a, double b)
{
    return PI * a * a * b;
}
double volume(double a)
{
    return (4.0 / 3.0) * PI * a * a * a;
}
int main()
{
    int s;
    double r, h;
    cout << "enter side length to cube volume:";
    cin >> s;
    cout << "cube volume is " << volume(s) << endl;
    cout << "enter radius and height to cylinder :";
    cin >> r >> h;
    cout << "cylinder volume  is " << volume(r, h) << endl;
    cout << "enter radius to sphere :";
    cin >> r;
    cout << "sphere volume is " << volume(r);
    return 0;
}