#include <iostream>
using namespace std;

class FI;
class CM{
    float meters, centimeters;

public:
    CM(float m, float c){
        meters = m;
        centimeters = c;
    }
    friend void compare(CM &x, FI &y);
};

class FI{
    float inch;
    float feet;

public:
    FI(float i, float f){
        inch = i;
        feet = f;
    }

    friend void compare(CM &, FI &);
};

void compare(CM &a, FI &b){
    if ((b.feet * 0.0254) < a.meters){
        cout << "Distance in meters and centimers is larger\n";
    }else{
        cout << "Distance in inches and feet is larger\n";
    }
}

int main(){
    int p,q,r,s;

    cout<<"Enter meter & centimeter: ";
    cin>>p>>q;
    CM a(p, q);

    cout<<"Enter feet & inches: ";
    cin>>r>>s;
    FI b(r, s);

    compare(a, b);

    return 0;
}
