#include <iostream>
using namespace std;
class rohit
{
public:
    void add()
    {
        int sum = 0, count = 0, num, i;
        cout << "enter nummber :";
        cin >> num;
        for (int i = 1, count = 0; count < num; i = i + 2)
        {
            sum = sum + i;
            count = count + 1;
            cout<<sum<<"+";
        }
        cout <<"="<< sum;
    }
};
int main()
{
    rohit k;
    k.add();

    return 0;
}