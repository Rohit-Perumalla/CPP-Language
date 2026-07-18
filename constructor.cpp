//parameterised constructor
#include <iostream>
using namespace std;
class square{
private:
    int side;
    public:
    square(int s){
        side=s;

    }
    int area (){
        return side*side;
    }
};
int main(){
    square s(10);
    cout<<"area of swuare is :"<<s.area()<<endl;
    return 0;
}