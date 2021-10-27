#include <bits/stdc++.h>
using namespace std;

class Sales{
    private:
        int day,id;
        double amount;    
    
    public:
        Sales(int dayx, double amountx, int idx){
            day = dayx;
            amount = amountx;
            id = idx;
        }        
        bool is(int dayx,double amountx, int idx){
            return (day ==dayx && amount == amountx &&  id == idx );
        }

    protected :
        int getID(){
            return id;
        }
};

class SalesPerson : public Sales{
    private:
        SalesPerson(int day,double amount, int id) : Sales(day,amount,id){
        }
    public:
        int ID(){
            return getID();
        }        

    friend SalesPerson * CreateObj();
};

SalesPerson * CreateObj(){
    int day,id;
    double amount;
    cout << "Enter day, id  & amount : ";
    cin >> day >> id >> amount;
    SalesPerson * d = new SalesPerson(day,id,amount);
    return d;
}

int main(){
    SalesPerson * arr[5];
    for(int i = 0 ; i < 5 ; i++){
        arr[i] = CreateObj();
    }
    int day,id;
    double amount;
    cout << "Enter  id , to lookup: ";
    cin >> id;

    bool found = false;
    for(int i = 0 ; i < 5 ; i++){
        if(arr[i]->ID() == id){
            found = true;
            break;
        }
    }


    cout << (found ? "YES" : "NO") << "\n";

    return 0;
}