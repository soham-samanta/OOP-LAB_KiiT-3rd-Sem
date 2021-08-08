#include <iostream>
using namespace std;
struct student{
    char name[30];
    int rollno;
    int marks[5];
    void input(){
        cout << "Enter student's name: ";
        cin >> name;
        cout << "Roll Number: ";
        cin >> rollno;
        cout << "Enter the marks of 5 sebjects:" << endl;
        for (int i = 0; i < 5; ++i)
        {
            cin >> marks[i];
        }
    }
    int total()
    {
        int sum = 0;
        for (int i = 0; i < 5; ++i)
        {
            sum += marks[i];
        }
        return sum;
    }
};
void dispTotalNPercent(student s[], int n);
void dispStudByRoll(student s[], int n, int searchroll);
void dispStudByPercent(student s[], int n, int min, int max);
void sortArrAscTotal(student s[], int n);
int main(){
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    student s[n];
    for (int i = 0; i < n; ++i){
        cout << endl<< "Student " << i + 1 << ":\t" << endl;
        s[i].input();
    }
    dispTotalNPercent(s, n);
    int roll;
    cout << "\n\nEnter the roll no. to search: ";
    cin >> roll;
    dispStudByRoll(s, n, roll);
    int max, min;
    cout << "\nEnter the max & min % range: ";
    cin >> max>>min;

    dispStudByPercent(s, n, max, min);
    sortArrAscTotal(s, n);
}
void dispTotalNPercent(student s[], int n)
{
    int percent;
    for (int i = 0; i < n; ++i)
    {
        cout << endl<< "Student " << i + 1 << ":\tName: " << s[i].name << "\tTotal: " << s[i].total() << "\tPercentage: " << ((float)s[i].total() / 500) * 100 << "%";
    }
}
void dispStudByRoll(student s[], int n, int searchroll)
{
    for (int i = 0; i < n; ++i)
    {
        if (s[i].rollno == searchroll)
        {
            cout << endl
                 << "Student " << i + 1 << ":\tName: " << s[i].name << "\tRoll Number: " << s[i].rollno << endl
                 << "Marks: \n";
            for (int j = 0; j < 5; ++j)
            {
                cout << "Subject " << j + 1 << ":\t" << s[i].marks[j] << endl;
            }
        }
    }
}
void dispStudByPercent(student s[], int n, int max, int min)
{
    for (int i = 0; i < n; ++i)
    {
        if (((float)s[i].total() / 500) * 100 <= max && ((float)s[i].total() / 500) * 100 >= min)
        {
            cout << endl
                 << "Student " << i + 1 << ":"
                 << "\tName: " << s[i].name << "\tRoll Number: " << s[i].rollno << "\tPercentage: " << ((float)s[i].total() / 500) * 100 << "%";
        }
    }
}
void sortArrAscTotal(student s[], int n)
{
    cout << endl 
         << "\n\t\tAscending Order of Marks" << endl;
    int index[n];
    for (int i = 0; i < n; ++i)
    {
        index[i] = i;
    }
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - 1; ++j)
        {
            if (s[index[j]].total() > s[index[j + 1]].total())
            {
                index[j] += index[j + 1]; //swapping
                index[j + 1] = index[j] - index[j + 1];
                index[j] -= index[j + 1];
            }
        }
    }
    for (int i = 0; i < n; ++i)
    {
        cout << endl
             << "Student " << index[i] + 1 << ":Name: " << s[index[i]].name << "Roll Number: " << s[index[i]].rollno << "\tTotal: " << s[index[i]].total();
    }
}