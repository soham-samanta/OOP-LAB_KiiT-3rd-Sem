#include <iostream>
using namespace std;

class student{
	string name;
	int roll;
	int marks[5];
	int tmarks=0;
	int high=0;
	public:
		void getdata(){
			cout<<"Enter Name: ";
			cin>>name;
			cout<<"Enter Roll Number: ";
			cin>>roll;
			cout<<"Enter Marks of five subjects: ";
			for(int i=0; i<5; i++){
				cin>>marks[i];
				tmarks+=marks[i];	
                if (marks[i] > high) 
                high = marks[i]; 
			}
            
		}
		void display(){
			cout<<"\nStudent's Name: "<<name<<endl;
			cout<<"Roll Number: "<<roll<<endl;  
			for(int i=0; i<5; i++){
				cout<<"Marks of Subject "<<i<<" : ";
				cout<<marks[i]<<endl;	
			}
			cout<<"Total Marks: "<<(tmarks)<<endl;
            cout<<"Highest Marks among 5 subjects: "<<high;
		}	
};

int main(){
	student ob;
	ob.getdata();
	ob.display();
	return 0;
}
