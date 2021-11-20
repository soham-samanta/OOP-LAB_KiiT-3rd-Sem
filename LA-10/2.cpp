#include <bits/stdc++.h>
using namespace std;

class StringAlloc{
    private:
        string S;
    public:
        StringAlloc(string a){
            S = a;
        }
        StringAlloc operator + (StringAlloc & s){
                string res = S + s.S;
                StringAlloc ans(res);
                return ans;                
        }

        void disp(){
            cout << "String : "  << S << "\n";
        }

    
};

int main(){
    string S;
    cout << "Enter String : ";
    cin >> S;
    StringAlloc a(S);
    cout << "Enter String : ";
    cin >> S;
    StringAlloc b(S);
    StringAlloc c = a+b;
    c.disp();
    return 0;
}