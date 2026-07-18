#include <iostream>
using namespace std;

template <typename T>
T findLargest(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    int i1, i2;
    float f1, f2;
    char c1, c2;

    cout << "Enter two integers: ";
    cin >> i1 >> i2;
    cout << "Largest integer: " << findLargest(i1, i2) << endl;

    cout << "Enter two floats: ";
    cin >> f1 >> f2;
    cout << "Largest float: " << findLargest(f1, f2) << endl;

    cout << "Enter two characters: ";
    cin >> c1 >> c2;
    cout << "Largest character (ASCII comparison): " << findLargest(c1, c2) << endl;

    return 0;
}
