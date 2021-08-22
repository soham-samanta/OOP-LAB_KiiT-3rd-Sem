// call by referance
#include <iostream>
using namespace std;
void swap(int *x, int *y){
    int swap;
    swap = *x;
    *x = *y;
    *y = swap;
}
int main(){
    int x,y;
    cout<< "enter the value of x and y:";
    cin>>x>>y;
    swap(&x, &y); // passing value to function
    cout<<"After Swapping: "<<endl;
    cout << "Value of x is: " << x << endl;
    cout << "Value of y is: " << y << endl;
    return 0;
}



// call by value
#include<iostream>
using namespace std;

void swap(int,int);

int main(){
        int num1,num2;
        cout<<"\n Enter First Number: ";
        cin>>num1;
        cout<<"\n Enter Second Number: ";
        cin>>num2;
        cout<<"\n Before Swapping the Value: \n"<<" "<<num1<<"\t"<<num2<<"\n";
        swap(num1,num2);
}

void swap(int num1,int num2){
        int num3;
        num3=num1;
        num1=num2;
        num2=num3;
        cout<<"\nAfter Swapping the Value : \n"<<" "<<num1<<"\t"<<num2;
}



// call by address
#include<iostream>
using namespace std;

void swap(int *,int *);

void swap(int *a,int *b){
        int c;
        c=*a;
        *a=*b;
        *b=c;
        cout<<"\nAfter Swapping, Value of: \n\tA = "<<*a<<"\tB = "<<*b<<"\n";
}

int main(){
        int a,b;
        cout<<"Enter Value Of A: ";
        cin>>a;
        cout<<"\nEnter Value of B: ";
        cin>>b;
        cout<<"\nBefore Swapping, Value of: \n\tA = "<<a<<"\tB = "<<b<<"\n";
        swap(&a,&b);
}

