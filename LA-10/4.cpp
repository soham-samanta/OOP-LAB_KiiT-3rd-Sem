#include <bits/stdc++.h>
using namespace std;

class Employee{
    private:
        double salary = 0;
    protected:
        string type="";
        virtual double calcSalary() = 0;
    public:        
        Employee(string a){
            type = a;
        }
        void getSalary(){
            salary = calcSalary();
            cout << "Salary of " << type << " type Employee : " << salary << "\n";
        }
};

class Regular : public Employee{
    private:
        double DA,HRA,base;
    public:
        Regular() : Employee("Regular"){
            cout << "Enter DA : ";
            cin >> DA;
            cout << "Enter HRA : ";
            cin >> HRA;
            cout << "Enter base : ";
            cin >> base;
        }
        double calcSalary(){
            return DA+HRA+base;
        }
};

class PartTime : public Employee{
    private:
        int no_of_h;
        double pay_p_h;
    public:
        PartTime() : Employee("Part Time"){
            cout << "No. of hours worked : ";
            cin >> no_of_h;
            cout << "Pay Per Hour : ";
            cin >> pay_p_h;
        }
        double calcSalary(){
            return no_of_h*pay_p_h;
        }
};

int main(){
    PartTime a;
    a.getSalary();
    return 0;
}