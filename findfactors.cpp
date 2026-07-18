#include <iostream>
using namespace std;
class rohit
{
public:
    void factors()
    {
        int n;
        cout << "enter number :";
        cin >> n;
        cout << "factors is:" << endl;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                cout << i << endl;
            }
        }
    }
};
int main()
{
    rohit h;
    h.factors();

    return 0;
}