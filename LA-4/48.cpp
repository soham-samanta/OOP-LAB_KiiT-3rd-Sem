#include<bits/stdc++.h>
using namespace std;

int power(int m,int n=2){
    double t;
    t=pow(m,n);
    return t;
}

int main(){
    int num,ans;
    int p;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"enter the power: ";
    cin>>p;
    if(p==0){
        ans=power(num);
        cout<<"Answer: "<<ans<<endl;
        }else{
        ans=power(num,p);
        cout<<"Answer: "<<ans<<endl;
    }
    return 0;
}