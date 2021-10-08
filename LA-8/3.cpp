#include <bits/stdc++.h>
using namespace std;

class Toll{
    private:
        unsigned int cars_passed = 0;
        double toll_collected=0.0;

    public:
        Toll(){
            cars_passed=0;
            toll_collected=0;
        }
        void payingCar(){
            cars_passed++;
            toll_collected+=50.0;
        }
        void nopayCar(){
            cars_passed++;
        }
        void display(){
            cout << "Total Cars Passed : " << cars_passed << "\n";
            cout << "Toll Collected : " << toll_collected << "\n";
            cout << "Cars that did not pay : " << (cars_passed - (toll_collected/50.0)) << "\n";
        }
};

class Test : public Toll{
    public:
        void start(int seed){
            unsigned int car_cnt=0;
            double sum=0;
            srand(time(0));
            for(int i = 0 ; i < seed ; i++){                                
                int ch =  rand();                
                if(ch%2 == 0){
                    cout << "Adding a Paying Car : \n";
                    payingCar();
                    car_cnt++;
                    sum += 50.0;
                }
                else{
                    cout << "Adding a Non-Paying Car : \n";
                    nopayCar();
                    car_cnt++;
                }
            }
            cout << "Expected :  \n";
            cout << "Total Cars Passed : " << car_cnt << "\n";
            cout << "Toll Collected : " << sum << "\n";
            cout << "Cars that did not pay : " << (car_cnt - (sum/50.0)) << "\n";

            cout << "\nOutput : \n";
            display();
        }
};

int main(){    
    Test t;
    t.start(6);
    return 0;
}