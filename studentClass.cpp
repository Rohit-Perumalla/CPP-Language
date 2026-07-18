#include <iostream>
using namespace std;
class student
{
public:
    int rollno;
    string name;
    int age;
    
    long long phno;
    void display()
    {
        cout << "name :" << name << endl;
        cout << "roll  no :" << rollno << endl;
        cout << "age :" << age << endl;
        cout << "phone no :" << phno << endl;
    }
};
int main()
{
    student s1;
    s1.name = "rohit";
    s1.rollno = 8694;
    s1.age = 18;
    s1.phno =7989800369;
    s1.display();
    return 0;
}