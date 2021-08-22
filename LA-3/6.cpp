#include <iostream>
using namespace std;

class arith{
    public:
    int p, q;
    int sum, sub, mul, mod;
    float div;
    void op(){
        cout << "Enter any two numbers:\n";
        cin >> p >> q;

    sum = p + q;
    sub = p - q;
    mul = p * q;
    div = (float)p / q;
    mod = p % q;

    cout << endl;
    cout << "SUM        " << p << " + " << q << " = " << sum << "\n";
    cout << "DIFFERENCE " << p << " - " << q << " = " << sub << "\n";
    cout << "PRODUCT    " << p << " * " << q << " = " << mul << "\n";
    cout << "QUOTIENT   " << p << " / " << q << " = " << div << "\n";
    cout << "MODULUS    " << p << " % " << q << " = " << mod << "\n";

    }
};

int main() {
    arith ob;
    ob.op();
    return 0;
}