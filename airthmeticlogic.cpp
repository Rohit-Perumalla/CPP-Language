#include <iostream>
using namespace std;

double add(double num1, double num2)
{
    return num1 + num2;
}

double subtract(double num1, double num2)
{
    return num1 - num2;
}

double multiply(double num1, double num2)
{
    return num1 * num2;
}

double divide(double num1, double num2)
{
    if (num2 != 0)
        return num1 / num2;
    else
    {
        cout << "Error! Division by zero is not allowed.";
        return 0;
    }
}

double mod(double num1, double num2)
{
    if (num2 != 0)
        return (int)num1 % (int)num2;
    else
    {
        cout << "Error! Modulus by zero is not allowed.";
        return 0;
    }
}

int main()
{
    double num1, num2;
    int choice;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "\nChoose an operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Modulus\n";
    cout << "Enter your choice (1-5): ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\nResult: " << add(num1, num2);
        break;
    case 2:
        cout << "\nResult: " << subtract(num1, num2);
        break;
    case 3:
        cout << "\nResult: " << multiply(num1, num2);
        break;
    case 4:
        cout << "\nResult: " << divide(num1, num2);
        break;
    case 5:
        cout << "\nResult: " << mod(num1, num2);
        break;
    default:
        cout << "\nInvalid choice!";
    }

    return 0;
}
