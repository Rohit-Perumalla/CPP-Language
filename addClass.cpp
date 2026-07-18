#include <iostream>
using namespace std;
class addclass
{
public:
    void add()
    {
        int a, b;
        cout << "enter values :";
        cin >> a >> b;
        cout << "addition is " << a + b << endl;
    }
};
int main()
{
    addclass po;
    po.add();
    return 0;
}