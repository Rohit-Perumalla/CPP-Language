#include <iostream>
using namespace std;
int main()
{
    int i;
    cout << "enter number:";
    cin >> i;
    if (i < 0)
    {
        cout << "negative number.";
    }
    else if (i > 0)
    {
        cout << "positive number."; }
    else
    {
        cout << "zero not exist.";
    }
    return 0;
}