#include <iostream>
using namespace std;
class boy
{
public:
    virtual void show()
    {
        cout << "hi";
    }
};
class girl : public boy
{
public:
    void show() override
    {
        cout << "hello";
    }
};
int main()
{
    boy *b;
    girl g;
    b = &g;
    b->show(); // Output: hello
    return 0;
}