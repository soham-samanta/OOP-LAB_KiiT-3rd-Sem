#include <bits/stdc++.h>
using namespace std;

template<typename T1>
void sortF(T1 * arr, int N){
    for(int i = 0 ; i < N-1 ; i++){
        for(int j = 0 ; j < N-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    int ch;
    enter:
    cout << "Enter 1 for int array sort, and 2 for float array sort : ";
    cin >> ch;
    if(!(ch == 2 || ch == 1)) 
        goto enter;

    cout << "Enter no. of elements in array : ";
    int N;
    cin >> N;
    if(ch == 1){        
        int * d = new int[N];
        cout << "Input : ";
        for(int i = 0 ; i < N ; i++) 
            cin >> d[i];
        sortF(d,N);
        cout << "Sorted : ";
        for(int i = 0 ; i < N ; i++) 
            cout << d[i] << " ";
        cout << "\n";
    }else{        
        float * d = new float[N];
        cout << "Input : ";
        for(int i = 0 ; i < N ; i++) 
            cin >> d[i];
        sortF(d,N);
        cout << "Sorted : ";
        for(int i = 0 ; i < N ; i++) 
            cout << d[i] << " ";
        cout << "\n";
    }
    
    return 0;
}