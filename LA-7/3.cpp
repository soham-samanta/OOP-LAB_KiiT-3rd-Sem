#include <bits/stdc++.h>
using namespace std;

class Account{
    protected:
        int acc_no;
        float balance;
        string name;
    public:
        void InputAccDetails(){
            cout  << "Name : ";
            cin >> name;
            cout << "Acc No : ";
            cin >> acc_no;
        }
};

class Savings :  private Account{
    private:
        float min_balance = 0;
    public:
        void EnterDetails(){
            InputAccDetails();
            cout << "Enter minimum balance for savings account : ";
            cin >> min_balance;
        }
        void Balance(){
            cout << "Current Balance : " << balance << endl;
        }
        void DepositMoney(){
            float val;            
            while( (cout << "Enter money to deposit : ", cin >> val) && balance+val < min_balance ){
                cout << "Minimum balance not met !! Enter Again....\n";
            }
            balance += val;            
            Balance();
        }
        void Withdraw(){
            float val;
            while( (cout << "Enter money to withdraw : ", cin >> val) && balance-val < min_balance ){
                cout << "Minimum balance will be exceeded !! Enter Again....\n";
            }
            balance -= val;
            Balance();
        }
};

int main(){
    Savings ac;
    ac.EnterDetails();
    int ch=0;
    while(ch != -1){
        cout << "Enter:\n1 : Deposit Money\n2: Withdraw\n3: Display Balance\n\nEnter choice : ";   
        cin >> ch;
        switch (ch)
        {
        case 1:
            ac.DepositMoney();
            break;
        case 2:
            ac.Withdraw();
            break;
        
        case 3:
            ac.Balance();
            break;                
        }
    }
    return 0;
}