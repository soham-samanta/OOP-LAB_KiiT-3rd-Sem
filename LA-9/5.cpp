#include <bits/stdc++.h>
using namespace std;

class PersontoInvest{
    public:
        string name;
        int id,dob;
        PersontoInvest(){
            cout << "Person Details : \n";
            cout << "Name : ";
            cin >> name;
            cout << "Id : ";
            cin >> id;
            cout << "DOB : ";
            cin >> dob;
        }
        void display(){
            cout << "Person Details : \n";
            cout << "Name : ";
            cout <<  name;
            cout << "\nId : ";
            cout <<  id;
            cout << "\nDOB : ";
            cout <<  dob;
            cout << "\n";
        }
};

class Investment : public PersontoInvest{ 
    public:
        double initial,current,percent_profit,profit;
        Investment() : PersontoInvest(){      
            cout << "Investment Data :\n";
            cout << "Initial Amt : ";                  
            cin >> initial;
            cout << "Current Amt : ";
            cin >> current;            
            profit = current-initial;
            percent_profit = profit/initial * 100.0;
        }
        void display(){
            PersontoInvest::display();
            cout << "Initial : " << initial << "\n";
            cout << "Current : " << current << "\n";
            cout << "Percent Profit : " << percent_profit << "\n";
            cout << "Profit : " << profit << "\n";
        }
};

class House{
    public:
        string street_address;
        int sq_ft;
        House(){
            cout << "House details : \n";
            cout << "Street Address : ";
            cin >> street_address;
            cout << "sq_ft : ";
            cin >> sq_ft;            
        }
        void display(){
            cout << "Street Name : " << street_address << "\n";
            cout << "Sq. Ft : " << sq_ft << "\n";
        }
};

class HouseThatIsAnInvestment : public Investment , public House{
    public:
        HouseThatIsAnInvestment() : Investment(), House(){
            Investment::display();
            House::display();
        }
};

int main(){    
    HouseThatIsAnInvestment a;

    return 0;
}