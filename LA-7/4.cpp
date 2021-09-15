#include <bits/stdc++.h>
using namespace std;

class Demo{
    protected:
        int marks,total_marks;
    public:
        void input(){
            cout << "Enter marks : ";
            cin >> marks;
            cout << "Enter Total Marks : ";
            cin >> total_marks;
        }
};

class Result : private Demo{
    public:
        void getMarks(){
            input();
        }
        void getResult(){
            float res = ((float)marks/total_marks) * 100;            

            cout << "Result : " << res <<"%" << endl;
        }
};

int main(){
    Result d1;
    d1.getMarks();
    d1.getResult();
    return 0;
}