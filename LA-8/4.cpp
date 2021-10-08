#include <bits/stdc++.h>
using namespace std;

void Swap(string & a, string & b){
    string t = a;
    a = b;
    b = t;
}


void Swap(int & a, int & b){
    int t = a;
    a = b;
    b = t;
}


void Swap(double & a, double & b){
    double t = a;
    a = b;
    b = t;
}


class Cricket{
    string * player;
    int  * runs, *innings, *not_out;
    double *average ;    
    int players = 0;
    public:
        Cricket(int n){
            player = new string[n];
            runs = new int[n];
            innings = new int[n];
            not_out = new int[n];
            average = new double[n];
            players = n;
        }
        void read(){
            for(int i = 0 ; i < players; i++){
                cout << "Player " << (i+1) << ", Enter Name,runs,innings and times not out : ";
                cin >> player[i] >> runs[i] >> innings[i] >> not_out[i];  
                average[i] = runs[i]/innings[i];             
            }
        }
        void sort(){
            for(int i = 0 ; i < players ; i++){
                for(int j = 0 ; j < players - i - 1; j++){
                    if(average[j] < average[j+1]){
                        Swap(average[j],average[j+1]);
                        Swap(player[j],player[j+1]);
                        Swap(runs[j],runs[j+1]);
                        Swap(innings[j],innings[j+1]);
                        Swap(not_out[j],not_out[j+1]);
                    }
                }
            }
        }
        void show_table(){
            sort();
            cout << "Name\tRuns\tInnings\tnot out\tAverage\n";
            for(int i = 0 ; i < players ; i++){
                cout << player[i] << "\t" << runs[i] << "\t" << innings[i] << "\t" << not_out[i] << "\t" << average[i] << "\n"; 
                
            }            
        }

};

int main(){
    Cricket cr(2);
    cr.read();
    cr.show_table();
    return 0;
}