#include <iostream>
#include <iomanip>
using namespace std;
class outside
{
public:
    int add(int a, int b);
    int multi(int a, int b);
};
int outside ::add(int a, int b)
{
    return a + b;
}
int outside ::multi(int a, int b)
{
    return a * b;
}
int main()
{
    int a = 9, b = 9;
    cout << "ener values :";
    cin >> a >> b;
    outside po;
    cout << setw(7) << "addition is " << po.add(a, b) << endl;
    cout << "multiplication is " << po.multi(a, b);
    return 0;
}