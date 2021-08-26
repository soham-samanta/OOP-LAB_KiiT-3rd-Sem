#include<bits/stdc++.h>
using namespace std;

inline void sum(int x){
    cout<<x<< " ";
}

int main(){
    int N;
    cout<<"Enter total number of natural numbers: ";
    cin>>N;
    for(int i=1;i<=N;i++){
        sum(i);
    }
    return 0;
}