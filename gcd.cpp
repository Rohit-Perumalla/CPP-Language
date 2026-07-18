#include <iostream>
using namespace std;
int gcd(int i, int j, int temp)
{
    while (j != 0)
    {
        temp = j;
        j = i % j;
        i = temp;
    }
    return i;
}

int main()
{
    int i, j, k;
    cout << "enter value:";
    cin >> i >> j;
    cout << "gcd is " << gcd(i, j, k);
    return 0;
}