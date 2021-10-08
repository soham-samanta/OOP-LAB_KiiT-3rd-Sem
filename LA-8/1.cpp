#include <bits/stdc++.h>
using namespace std;

class Valid{
    public:
    static string email_address;
    static bool check(){
        int pos = find(email_address.begin(),email_address.end(),'@') - email_address.begin();
        int n = email_address.length();
        bool flg = false;
        if(pos >= 0 && pos < n && email_address[pos] == '@'){
            flg = true;
        }
        if(n > 5){
            if(email_address.substr(n-4,4).compare(".com") == 0 && flg && pos < (n-5)){
                flg = true;
            }else{
                flg = false;
            }
        }
        return flg;
    }
};

string Valid::email_address = "";

int main(){
    string t1;
    cout<<"Enter Your E-Mail adress: ";
    cin >> t1;
    Valid::email_address = t1;
    bool res =  Valid::check();
    if(res) cout << "Valid E-mail\n";
    else cout << "InValid E-mail\n";

    return 0;
}