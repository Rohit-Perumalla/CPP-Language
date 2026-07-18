#include<iostream>
#define PI 3.14
using namespace std;
double area(double r)
{
    return PI * r * r;
}
float area(float i, float j)
{
    return (1 * i * j) / 2;
}
int area(double k, double l)
{
    return k * l;
}
int main(){
    double r,i,j;
    cout<<"enter radius to circle area :";
    cin>>r;
    cout<<"area of circle is "<<area(r)<<endl;
    cout<<"enter base and height to triangle area :";
    cin>>i>>j;
    cout<<"area of triangle is "<<area (i,j)<<endl;
    cout<<"enter langth and breath to ractangle area :";
    cin>>i>>j;
    cout<<"area of recctangle is "<<area (i,j);
    return 0;
}