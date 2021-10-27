#include <bits/stdc++.h>
using namespace std;

class Figure{
    protected:
        string type="None";
    public:
        Figure(string t) {
            type = t;
        }
        void verbose(string act){
            cout << act << " from " << type << "\n";            
        }
        void erase(){
            verbose("erase");
        }
        void draw(){
            verbose("draw");
    }
};

class Rectangle : public Figure{
    public:
        Rectangle() : Figure("Rect"){            
    }
};

class Square : public Figure{
    public:
        Square() : Figure("Square"){            
    }
};


int main(){    
    Rectangle r;
    Square s;
    r.erase();
    s.draw();
    s.erase();
    r.draw();
    return 0;
}