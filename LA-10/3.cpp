#include <bits/stdc++.h>
using namespace std;
#define PI 3.14

class Shape{
    protected:
        int l =0;
        double * dims;
        double area;    
            
        void inputDims(){
            for(int i = 0 ; i <  l ; i++){
                cout << "Enter dimension " << i+1 << " : ";                
                cin >> dims[i];
            }
        }

    public:
        Shape(int dim_s){
            l = dim_s;
            dims = new double[dim_s];
            inputDims();
        }
        virtual void calcArea() = 0;
        void Area(){
            calcArea();
            cout << "Area : " << area << "\n";
        }
};

class Circle : public Shape{
    public:
        Circle() : Shape(1){   
        }
        void calcArea(){                 
            area = dims[0] * dims[0] * PI;
        }
};

class Square : public Shape{
    public:
        Square() : Shape(1){   
        }
        void calcArea(){                 
            area = dims[0] * dims[0];
        }
};

class Triangle : public Shape{
    public:
        Triangle() : Shape(2){   
        }
        void calcArea(){                 
            area = dims[0] * dims[1] * 0.5;
        }
};


int main(){
    Triangle A;
    A.Area();

    return 0;
}