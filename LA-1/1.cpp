#include<bits/stdc++.h>
using namespace std;

struct student{
    char name[50];
    int roll;
    float m1,m2,m3,m4,m5;
};

int main(){
    struct student s1;
    cout << "Enter name: ";
    cin >> s1.name;
    cout << "Enter roll number: ";
    cin >> s1.roll;
    cout << "Enter marks in 5 subjects: ";
    cin >> s1.m1>>s1.m2>>s1.m3>>s1.m4>>s1.m5;

    cout << "\nDisplaying details," << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Roll: " << s1.roll << endl;
    cout << "Marks of student 1: " << s1.m1 << endl;
    cout << "Marks of student 2: " << s1.m2 << endl;
    cout << "Marks of student 3: " << s1.m3 << endl;
    cout << "Marks of student 4: " << s1.m4 << endl;
    cout << "Marks of student 5: " << s1.m5 << endl;

    return 0;
}