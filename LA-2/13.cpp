#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, num, last, rev = 0;

    cout << "Enter a number: ";
    cin >> num;
    n = num;

    do{
         last = num % 10;
         rev = (rev * 10) + last;
         num /= 10;
    }while (num != 0);

    if (n == rev)
        cout << "The number is a palindrome.";
    else
        cout << "The number is not a palindrome.";

    return 0;
}