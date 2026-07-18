#include <iostream>
using namespace std;


template <typename T>
class Calculator {
private:
    T n1, n2;

public:
  
    Calculator(T a, T b) {
        n1 = a;
        n2 = b;
    }

    T add() {
        return n1 + n2;
    }

    T subtract() {
        return n1 - n2;
    }

    T multiply() {
        return n1 * n2;
    }

    T divide() {
        if (n2 != 0)
            return n1 / n2;
        else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }

    void displayResults() {
        cout << "Addition: " << add() << endl;
        cout << "Subtraction: " << subtract() << endl;
        cout << "Multiplication: " << multiply() << endl;
        cout << "Division: " << divide() << endl;
    }
};


int main() {
   int a,b,c,d;
    cout << "Integer Calculator:" << endl;
    cout<<"give a and b:";
    cin>>a>>b;

    Calculator<int> intCalc(a,b);
    intCalc.displayResults();

    cout << endl;

    cout<<"give c and  d value:";
    cin>>c>>d;
    cout << "Float Calculator:" << endl;
    Calculator<float> floatCalc(c,d);
    floatCalc.displayResults();

    return 0;
}
