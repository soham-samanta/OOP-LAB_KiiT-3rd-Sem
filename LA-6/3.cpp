#include<bits/stdc++.h>
using namespace std;

class Emp{
    private:
        int code;
        char empname[20];
        char designation[30];
        int salary;
    public:
        Emp(){
            designation;
        }
        void GetData();
        void DispData();
};

void Emp::GetData(){
    cout<<"Enter the employee code: ";
    cin>>code;
    cout<<"Enter the employee name: ";
    cin>>empname;
    cout<<"Enter the Designation: ";
    cin>>designation;
    cout<<"Enter the employee salary: ";
    cin>>salary;
}

void Emp::DispData(){
    cout<<endl<<code<<"\t"<<empname<<"\t"<<designation<<"\t\t"<<salary;
}

int main(){
    Emp e[1];
    for(int i=0;i<1;i++){
        e[i].GetData();
    }
    
    cout<<endl<<"The employee information is:";
    cout<<endl<<"EmpID \t Name \t Designation \t Salary";
    for(int i=0; i<1;i++){
        e[i].DispData();
    }

    return 0;
}