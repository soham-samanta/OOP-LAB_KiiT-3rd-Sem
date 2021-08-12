#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,temp;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
    cout<<"Before swaping a: "<<a<<" "<<"b: "<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swaping a: "<<a<<" "<<"b: "<<b<<endl;
    return 0;
}