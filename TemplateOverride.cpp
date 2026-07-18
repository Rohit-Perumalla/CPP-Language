#include<iostream>
using namespace std;
template <typename T>
T add(T a, T b) {
    return a + b;
}
void add(int n, int m) {
    cout << "Integer addition: " << n + m<< endl;
}
int main(){
    cout << "Integer addition: " << add(5, 10) << endl; // Calls add<int>(int, int)
    cout << "Float addition: " << add(5.5, 10.5) << endl; // Calls add<double>(double, double)
    cout << "Double addition: " << add(5.5f, 10.5f) << endl; // Calls add<float>(float, float)
    return 0;
}