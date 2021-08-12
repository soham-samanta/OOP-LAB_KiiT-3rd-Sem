#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int base, exp;
    cout << "Enter base and exponent: ";
    cin >> base >> exp;
    int ans= pow(base,exp);
 
    cout << base << "^" << exp << " = " <<ans;
    return 0;
}