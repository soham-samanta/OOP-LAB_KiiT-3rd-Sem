#include <bits/stdc++.h>
using namespace std;

template<class T1, class T2>
class DisplaySum{
    T1 a;
    T2 b;
    public:
        DisplaySum(T1 x, T2 y){
            a = x;
            b = y;
        }
        void display(){
            T2 c = a+b;
            cout << c << "\n";
        }        
};


int main(){
    int a;
    double b;
    cout << "Enter an integer  value : ";
    cin >> a;
    cout << "Enter a Double value : ";
    cin >> b;
    DisplaySum<int,double> DS(a,b);
    cout << "Sum of int and double : ";
    DS.display();
    return 0;
}