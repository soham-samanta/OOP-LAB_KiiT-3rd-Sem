#include <iostream>
using namespace std;
class emp{
  string name;
  int id,basic,hra,da;
  int sal;
  int rank;
public:
  void get(){
    cout << "Enter the name, id, basic, hra, da\n";
    cin >> name >> id >> basic >> hra >> da;
  }
  void display(){
    cout << "Name: " << name << "\n";
    cout << "ID: " << id << "\n";
    sal = basic + hra + da;
    cout << "Salary: " << sal << "\n";
    if(sal>10000 and sal < 20000)
      rank = 1;
    else if(sal>21000 and sal<30000)
      rank = 2;
    else 
      rank = 3;
    cout << "Rank of the employee is " << rank << "\n";
  }
  int getsal(){
    return sal;
  }
};
int main(){
  emp arr[3];
  for(int i=0; i<3; ++i){
    arr[i].get();
  }
  for(int i=0; i<3; ++i){
    arr[i].display();
  }
  int max = arr[0].getsal();
  int j = 0;
  for(int i=1; i<3; ++i){
    if(max<arr[i].getsal()){
      max = arr[i].getsal();
      j = i;
    }
  }
  cout << "The information of the employee with highest salary is\n";
  arr[j].display();
  int min = arr[0].getsal();
  int k = 0;
  for(int i=1; i<3; ++i){
    if(min>arr[i].getsal()){
      min = arr[i].getsal();
      k = i;
    }
  }
  cout << "The information of the employee with the lowest salary is\n";
  arr[k].display();
  return 0;
}