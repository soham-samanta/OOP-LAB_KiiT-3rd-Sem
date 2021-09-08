#include <bits/stdc++.h>
using namespace std;

class A{
public:
    A(string name) : name(name){
        cout << "A(" << name << ")::constructor()" << endl;
    }
    ~A(){
        cout << "A(" << name << ")::destructor()" << endl;
    }

private:
    string name;
};

class C{
public:
    C(string name, A a) : name(name), a(a){
        cout << "C(" << name << ")::constructor()" << endl;
    }
    ~C(){
        cout << "C(" << name << ")::destructor()" << endl;
    }
private:
    string name;
    A a;
};

class B{
public:
    B(string name) : name(name){
        cout << "B(" << name << ")::constructor()" << endl;
    }
    ~B(){
        cout << "B(" << name << ")::destructor()" << endl;
    }
private:
    string name;
    A a1{"a1"};
    A a2{"a2"};
    C c1{"c1", a1};
    A a3{"a3"};
};

int main(){
    B b("b1");
    return 0;
}