#include <iostream>
using namespace std;
#define MAX 10
 
class student{
    private:
        char  name[30];
        int   rollNo;
        int   total;
        int   m1,m2,m3,m4,m5;
    public:
        void getDetails(void);
        void putDetails(void);
};
 
void student::getDetails(void){
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter marks in 5 subjects: ";
    cin >>m1>>m2>>m3>>m4>>m5;
     
    total=m1+m2+m3+m4+m5;
}
 
void student::putDetails(void){
    cout << "Student details:"<<endl;
    cout << "Name: "<< name <<endl<< "Roll Number: " << rollNo <<endl<< "Total: " << total;
}
 
int main(){
    student std[MAX];      
    int n;
     
    cout << "Enter total number of students: ";
    cin >> n;
     
    for(int i=0;i< n; i++){
        cout << "Enter details of student " << i+1 << ":\n";
        std[i].getDetails();
    }
     
    cout << endl;
     
    for(int i=0;i< n; i++){
        cout << "Details of student " << (i+1) << ":\n";
        std[i].putDetails();
    }
     
    return 0;
}