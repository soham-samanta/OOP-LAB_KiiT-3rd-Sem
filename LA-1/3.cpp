#include<bits/stdc++.h>
using namespace std;

struct emp{
    int id;
    string nam;
    int age;
    int sal;
    float gross;
};

void display(struct emp *st,int l){
    cout << "Details Entered : - " << endl;
    for(int i=0;i<l;i++){
        cout << "Employee number "<< "I'd: "<<i+1 << st->id << " Name : " << st->nam << " Age : " << st->age << " Sal : " << st->sal << " Gross Sal : " << st->gross << endl;
        st++;
    }
}

int main(){
    int n;
    cout << "Enter number of employees : ";
    cin >> n;
    struct emp a[n];
    for(int i=0;i<n;i++){
        cout << "Enter ID, name, age, basic sal respectively of Employee " << i+1 << endl;
        cin >> a[i].id >> a[i].nam >> a[i].age >> a[i].sal;
        a[i].gross = 1.9*a[i].sal;
    }
//    struct emp *s = a;
    display(a,n);
}
