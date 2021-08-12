#include <iostream>
using namespace std;

int main() {
    int n;
    bool flg = 1;
    cout << "Enter a number to check prime: ";
    cin >> n;

    if (n == 0 || n == 1) {
        flg = 0;
    }
    else {
        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                flg = 0;
                break;
            }
        }
    }
    if (flg==1)
        cout << n << " is a prime number";
    else
        cout << n << " is not a prime number";

    return 0;
}
