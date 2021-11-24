#include <bits/stdc++.h>
using namespace std;

template<class T1, class T2>
void display(T1 a, T2 b){
    T2 c = a+b;
    cout << c << "\n";
}

int main(){
    int a;
    double b;
    cout << "Enter integer value : ";    
    cin >> a;
    cout << "Enter Double Value : ";
    cin >> b;
    cout << "Int value using same function : ";
    display(a,b);
    cout << "Double value using same function : ";
    display(b,a);
    return 0;
}