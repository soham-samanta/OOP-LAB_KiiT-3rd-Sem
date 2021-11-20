#include <bits/stdc++.h>
using namespace std;

class OP{
    private:
        int val;
    public:
        OP(int x){
            val =x;            
        }
        OP operator++(int){            
            OP a(val);            
            val++;
            return a;
        }
        void disp(){
            cout << val << "\n";
        }
};

int main(){
    OP test(30);
    test++;
    test.disp();
    return 0;
}