#include <bits/stdc++.h>
using namespace std;

class VM{
    private : 
    int candidate_votes[3]={0,0,0};
    int candidates = 3;
    int spoilt_votes=0;
    public:
        VM(int n){            
            int vote;
            for(int i = 0 ; i < n ; i++){
                cout << "Candidate " << (i+1) << ",  Enter your vote (1-3) : ";
                cin >> vote;
                if(vote > candidates){
                    spoilt_votes++;
                    cout << "Counted as Spoilt Vote !\n";
                }else{
                    candidate_votes[vote-1]++;
                }
            }
        }
        ~VM(){
            for(int i = 0 ; i < candidates ; i++){
                cout << "Candidate : " << (i+1) << "\t->\t" << " Votes : " << candidate_votes[i] <<"\n";
            }
            cout << "Spoilt Votes : " << spoilt_votes << "\n";
        }
};

int main(){
    VM mac(4);    
    return 0;
}