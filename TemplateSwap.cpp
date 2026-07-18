#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;
    float p = 1.5, q = 3.7;
    char c1 = 'A', c2 = 'B';

    cout << "Before swapping integers: x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "After swapping integers:  x = " << x << ", y = " << y << endl;

    cout << "\nBefore swapping floats: p = " << p << ", q = " << q << endl;
    swapValues(p, q);
    cout << "After swapping floats:  p = " << p << ", q = " << q << endl;

    cout << "\nBefore swapping chars: c1 = " << c1 << ", c2 = " << c2 << endl;
    swapValues(c1, c2);
    cout << "After swapping chars:  c1 = " << c1 << ", c2 = " << c2 << endl;

    return 0;
}
