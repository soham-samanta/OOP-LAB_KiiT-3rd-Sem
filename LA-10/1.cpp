#include <bits/stdc++.h>
using namespace std;

class Complex{    
    private:
        int real=0,img = 0;
    public:
        Complex(int a, int b){                    
            real = a, img = b;
        }
        Complex operator +(Complex & s){
            Complex ans(real+ s.real, img + s.img);
            
            return ans;
        }
        Complex operator++(int){
            Complex a(real,img);                        
            real++;
            return a;
        }
        void disp(){
            cout << real << " + "  << img << "i\n";
        }

};

int main(){
    int real, img;
    cout << "Enter Complex No . : ";
    cin >> real >> img;
    Complex a(real,img);
    cout << "Enter Complex No . : ";
    cin >> real >> img;
    Complex b(real,img);
    Complex c = a + b;
    cout << "Adding both : ";
    c.disp();
    c++;
    cout << "Postfix Increment : ";
    c.disp();
    return 0;
}