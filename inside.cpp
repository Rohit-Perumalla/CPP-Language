#include <iostream>
using namespace std;
class inside
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int multi(int a, int b)
    {
        return a * b;
    }
    int cube(int i)
{
    return i * i * i;
}
};
int main()
{
    int a = 9, b = 9;
    cout << "ener values :";
    cin >> a >> b;
    inside po;
    cout << "addition is " << po.add(a, b) << endl;
    cout << "multiplication is " << po.multi(a, b)<<endl;
    cout<<"cube is "<<po.cube(a);
    return 0;
}