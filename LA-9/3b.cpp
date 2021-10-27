#include <bits/stdc++.h>
using namespace std;

class RealtorCommision{
    public:        
        double price, rate,commision;
        void getdata(){
            cin >> price >> rate;
        }
        void find_value(){
            commision = price * rate;            
        }
        void findvalue(){
            commision = ((int)price * (int)((rate)*100))/100;
        }
        void display(){
            find_value();
            cout << "find_value : "  << commision << "\n";
            findvalue();
            cout << "findvalue : "  << commision << "\n";
        }

};

int main(){    
    RealtorCommision a;
    a.getdata();
    a.display();
    return 0;
}