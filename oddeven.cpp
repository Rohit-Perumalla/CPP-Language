#include <iostream>
using namespace std;

int main()
{
    int number;

    // Input the number
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is even or odd
    if (number % 2 == 0)
    {
        cout << number << " is even." << endl;
    }
    else
    {
        cout << number << " is odd." << endl;
    }

    return 0;
}
