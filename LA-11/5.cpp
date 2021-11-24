#include <bits/stdc++.h>
using namespace std;

template<typename T>
void Area(T r){
    T ans = M_PI * r * r;
    cout << "(Template)Area of Circle : " << ans << "\n";
}

template<typename T1, typename T2>
void Area(T1 b, T2 h){
    T1 ans = 0.5 * b * h;
    cout << "(Template)Area of Triangle : " << ans << "\n";
}


void Area(int a, int b){
    cout << "Area of Rectangle : " << (a*b) << "\n";
}


int main(){
    double radius;
    cout << "Enter Radius of Circle : " ;
    cin >> radius;
    Area(radius);
    double h ,b;
    cout << "Enter base and height of Triangle : ";
    cin >> h >> b;
    Area(b,h);
    int w,d;
    cout << "Enter width and height of Rectangle : ";
    cin >> w >> d;
    Area(w,d);
    return 0;
}