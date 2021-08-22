// #include<bits/stdc++.h>
// using namespace std;

// class two{
//     int a;
//     int A[2]={0,0};
//     public:
//     void input();
//     void output();
//     void freq();
// };

// void two::input(){
//     cout<<"enter: ";
//     cin>>a;
//     A[0]++;
// }

// void two::output(){
//     cout<<a;
//     A[1]++;
// }

// void two::freq(){
//     cout<<"Input called"<<A[0]<<" times"<<endl;
//     cout<<"Output called"<<A[1]<<" times"<<endl;
// }

// int main(){
//     two i;
//     i.input();
//     // cout<<"Input was: ";
//     i.output();
//     cout<<endl;
//     i.freq();

//     return 0;
// }


#include <iostream>
using namespace std;
class integer
{
    int a;
    static int cntinput;
    static int cntoutput;

public:
    void input()
    {
        cin >> a;
        cntinput++;
    }
    void output()
    {
        cout << "a = " << a << "\n";
        cntoutput++;
    }
    static void times()
    {
        cout << "The function input has been called " << cntinput << " number of times\n";
        cout << "The function output has been called " << cntoutput << " number of times\n";
    }
};
int integer ::cntinput;
int integer ::cntoutput;
int main()
{
    integer i1, i2;
    cout << "Enter the value of first intger\n";
    i1.input();
    cout << "Enter the value of second integer\n";
    i2.input();
    cout << "For first integer\n";
    i1.output();
    cout << "For second integer\n";
    i2.output();
    integer ::times();
    return 0;
}