#include <iostream>
using namespace std;
class binary{
private:
    int m,n;
public:
    binary(){
    m=10;
    n=9;
     }
binary operator +(binary  b)
{
    b.m=m+b.m;
    b.n=n+b.n;
    return b;
}
void display(){
cout<<"Value of m:"<<m<<endl;
cout<<"Value of n:"<<n<<endl;
}
};
int main()
{
   binary a,b,c;
   cout<<"Before binary operator overloading m and n:"<<endl;
   a.display();
   c=a+b;
    cout<<"After binary operator overloading m and n:"<<endl;
   c.display();
    return 0;
}
