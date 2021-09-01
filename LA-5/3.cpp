#include<bits/stdc++.h>
using namespace std;

class dist{
    public:
    
    void get(){
        int x1,y1,x2,y2;
        cout<<"Enter the val of all the cordinates: "<<endl;
        cin>>x1>>x2>>y1>>y2;
    }

    float distance(int x1, int y1, int x2, int y2){
        return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);
    }
};


int main(){
    int x1,y1,x2,y2;
    dist d1;
    cout<<"Enter the val of all the cordinates: "<<endl;
    cin>>x1>>x2>>y1>>y2;
    // d1.get();
    cout<<"Distance between two co-ordinates are: "<<endl;
    cout<<d1.distance(x1,x2,y1,y2);

    return 0;
}