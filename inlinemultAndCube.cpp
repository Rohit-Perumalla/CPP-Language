#include <iostream>
using namespace std;


inline int multiply(int a, int b)
{
    return a * b;
}
inline int cube(int x)
{
    return x * x * x;
}
int main()
{
    int num1, num2;

    cout << "Enter two numbers to multiply: ";
    cin >> num1 >> num2;
    cout << "Multiplication result: " << multiply(num1, num2) << endl;

    cout << "Enter a number to find its cube: ";
    cin >> num1;
    cout << "Cube of " << num1 << " is: " << cube(num1) << endl;

    return 0;
}
