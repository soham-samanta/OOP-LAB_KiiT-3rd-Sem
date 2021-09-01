#include<bits/stdc++.h>
using namespace std;

class test {
    int objNo;
    static int objCnt;
  
    public:
    test(){
        objNo = ++objCnt;
    }
    ~test(){
        --objCnt;
    }
    void cnt(void){
        cout << "object number :" << objNo << "\n";
    }
    static void printObjCount(void){
        cout << "count:" << objCnt<< "\n";
    }
};

int test::objCnt;

int main(){
    test t1, t2;
    test::printObjCount();
  
    test t3;
    test::printObjCount();
  
    t1.cnt(); 
    t2.cnt(); 
    t3.cnt();
    return 0;
}