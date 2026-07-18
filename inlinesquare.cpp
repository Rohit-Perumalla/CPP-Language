#include <iostream>
using namespace std;
inline int square(int a)
{
    return a * a;
}
int main()
{ 
    int a;
    cout << "enter number:";
    cin >> a;
    cout << "Square value is " << square(a);
    return 0;
}