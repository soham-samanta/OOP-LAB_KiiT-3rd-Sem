

#include<iostream>
using namespace std;
class oop{
    public:
    inline int sum(int x, int y){
    return(x+y);
    }
    inline int sqr(int x){
    return x*x;
    }
};

int main(){
    oop obj;
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    cout<<"Square of the number: "<<obj.sqr(x)<<endl;
    int r,a,b;
    cout<<"enter two integers: ";
    cin>>a>>b;
    r=obj.sum(a,b);
    cout<<"The sum of two integers is: "<<r<<endl;
    return 0;
}
 

// OR 

#include<iostream>
using namespace std;
inline int sqr(int x){
    return x*x;
}

int main(){
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    cout<<"Square of the number : "<<sqr(x);
    return 0;
}
