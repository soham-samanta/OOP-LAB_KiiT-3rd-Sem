#include <bits/stdc++.h>
using namespace std;

class OP{
    private:
        int val;
    public:
        OP(int x){
            val =x;            
        }
        friend OP operator++(OP &, int);            
        void disp(){
            cout << val << "\n";
        }
};

OP operator++(OP & f, int){            
    OP a(f.val);            
    f.val++;
    return a;
}

int main(){
    OP test(30);
    test++;
    test.disp();
    return 0;
}