#include<bits/stdc++.h>
using namespace std;

class area{
    int choice;
    public:
    void disp(){
        cout<<"1. To find area of Triangle\n2. for finding area of Square\n3. for finding area of Circle\n4. for finding area of Rectangle"<<endl;
        cout<<endl<<"Enter Your Choice: "<<endl;
        cin>>choice;
        switch(choice) {
        case 1: {
            int a,b,c;
            float s,area;
            cout<<"Enter sides of triangle\n";
            cin>>a>>b>>c;
            s=(float)(a+b+c)/2;
            area=(float)(sqrt(s*(s-a)*(s-b)*(s-c)));
            cout<<"Area of Triangle is \n"<<area;
            break;
        }
        case 2: {
            float side,area;
            cout<<"Enter Sides of Square\n";
            cin>>side;
            area=(float)side*side;
            cout<<"Area of Square is \n"<<area;
            break;
        }
        case 3: {
            float radius,area;
            cout<<"Enter Radius of Circle\n";
            cin>>radius;
            area=(float)3.14159*radius*radius;
            cout<<"Area of Circle \n"<<area;
            break;
        }
        case 4: {
            float len,breadth,area;
            cout<<"Enter Length and Breadth of Rectangle\n";
            cin>>len>>breadth;
            area=(float)len*breadth;
            cout<<"Area of Rectangle is \n"<<area;
            break;
        }
        default: {
            cout<<"Invalid Choice\n";
            break;
            }
        }
    }
};

int main(){
   area a;
   a.disp();
}