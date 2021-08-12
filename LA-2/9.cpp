#include <bits/stdc++.h>  
using namespace std;  

int main(){  
    int n, rev=0;    
    cout<<"Enter a number: ";    
    cin>>n;    
    while(n!=0)    {    
        int last=n%10;      
        rev=rev*10+last;    
        n/=10;    
    }    
    cout<<"Reversed Number: "<<rev<<endl;     
    return 0;  
}  