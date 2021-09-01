#include<bits/stdc++.h>
using namespace std;
class Complex{
public:
    int r;
    int i;
    void setvalue(){
        cin>>r;
        cin>>i;
    }
	
    void display(){
        cout<<r<<"+"<<i<<"i"<<endl;
    }
	
    void sum(Complex c1, Complex c2){
        r=c1.r+c2.r;
        i=c1.i+c2.i;
        }
    };
    int main(){
        Complex c1,c2,c3;
        cout<<"Enter real and imaginary part of first complex number"<<endl;
        c1.setvalue();
        cout<<"Enter real and imaginary part of second complex number"<<endl;
        c2.setvalue();
        cout<<"Sum of two complex numbers is"<<endl;
        c3.sum(c1,c2);
        c3.display();
    return 0;
}