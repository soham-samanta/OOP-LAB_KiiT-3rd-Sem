#include<bits/stdc++.h>
using namespace std;

void swap(char &a , char &b){
    char tmp = a;
    a = b;
    b = tmp;
}

class ReverseString{
    private:
        string str;
    public:
        ReverseString(string a){
            str = a;
        }
        void Do(){
            for(int i = 0 ; i < str.length()/2; i++) {
            swap(str[i],str[str.length()-1-i]);    
            }        
        }
        string get(){
            return str;
        }
};
int main(){    
    string a;
    cin >> a;
    ReverseString x(a);
    x.Do();
    cout << x.get() << endl;
    return 0;
}