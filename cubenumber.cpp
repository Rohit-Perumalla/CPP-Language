#include <iostream>
using namespace std;
int cube(int i)
{
    return i * i * i;
}
int main()
{
    int j;
    cout << "enter number:";
    cin >> j;
    cout << "cube of " << j << " is " << cube(j);
    return 0;
}