#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    bool isPrime = true;

    if(n <= 1) {
        isPrime = false; // 0 and 1 are not prime
    } else {
        for(int i = 2; i < n; i++) {
            if(n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if(isPrime)
        cout << n << " is a Prime Number." << endl;
    else
        cout << n << " is NOT a Prime Number." << endl;

    return 0;
}
