#include <bits/stdc++.h>
using namespace std;
#define PI 3.14

class Shape{
    public:
        int N;
        int * dim;    
        void init(int n){
            N = n;
            dim = new int[N];
        }
        void input(){          
            cout << "Enter the " << N << " dimensions : " ;
            for(int i = 0 ; i < N ; i++){
                cin >> dim[i];
            }
        }
};

class Area : protected Shape{
    private :
        float ar = 0;
        int type;
    public:
        void inputDims(int n, int tp){
            type = tp;
            init(n);
            input();
        }
        void AreaTriangle(){
            ar = 0.5 * dim[0] * dim[1];
        }
        void AreaRectangle(){
            ar = dim[0] * dim[1];
        }
        void AreaCircle(){
            ar = PI * dim[0]*dim[0];
        }
        void getArea(){ 
            switch(type){
                case 1:
                    AreaTriangle();
                    break;
                case 2:
                    AreaRectangle();
                    break;
                case 3:
                    AreaCircle();
                    break;
            }
            cout << "Area : " << ar << endl;;  
        }
};

int main(){
    Area a;
    int ch, sz=0;
    cout << "Enter:\n1:Triangle\n2: Rectangle\n3:Circle\nEnter Choice : ";
    cin >> ch;
    switch (ch){
    case 1:
        sz=2;
        break;
    case 2:
        sz=2;
        break;
    case 3:
        sz=1;
        break;    
    }
    
    a.inputDims(sz,ch);
    a.getArea();
    return 0;
}