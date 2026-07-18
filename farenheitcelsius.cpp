#include <iostream>
#include <iomanip>
using namespace std;
double cel(double c, double f)
{
    return (c * 9 / 5) + 32;
}
double fah(double c, double f)
{
    return (f - 32) * 5 / 9;
}
int main()
{
    double f, c;
    int choice;
    cout << "1.Celcius to Farenheit.\n ";
    cout << "2.Farenheit to Celsius.\n";
    cout << "choose one choice :";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "celsius value: ";
        cin >> c;
        cout << "farenheit is " << cel(c, f) << setw(3) << "'F";
        break;
    case 2:
        cout << "farenheit value:";
        cin >> f;
        cout << "celsius is " << fah(c, f) << setw(3) << "'C";
        break;
    default:
        cout << "not exist.";
    }
    return 0;
}
