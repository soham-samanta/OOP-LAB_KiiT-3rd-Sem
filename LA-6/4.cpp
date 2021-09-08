#include<bits/stdc++.h>
using namespace std;

class Complex{

	public:
		int real, imaginary;
	Complex(int tempReal = 0, int tempImaginary = 0){
		real = tempReal;
		imaginary = tempImaginary;
	}

	Complex sum(Complex C1, Complex C2){
		Complex temp;
		temp.real = C1.real + C2.real;
		temp.imaginary = C1.imaginary + C2.imaginary;
		return temp;
	}
};

int main(){
    int r1,i1,r2,i2;
    cout<<"Enter the real and imaginary part of 1st complex number: ";
    cin>>r1>>i1;
	Complex C1(r1, i1);
	cout<<"Complex number 1 : "<< C1.real<< " + i"<< C1.imaginary<<endl;

    cout<<"Enter the real and imaginary part of 2nd complex number: ";
    cin>>r2>>i2;
	Complex C2(r2, i2);
	cout<<"Complex number 2 : "<< C2.real<< " + i"<< C2.imaginary<<endl;

	Complex C3;
	C3 = C3.sum(C1, C2);
	cout<<"\nSum of complex number : "<< C3.real << " + i"<< C3.imaginary;

    return 0;
}

