#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, divisors = 0;
    cout << "Enter a number: " << endl;
    cin >> num;

    if (num < 2) {
        cout << num << " is not a prime number" << endl;
    } else {
        bool isPrime = true;
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            cout << "The number " << num << " is prime" << endl;
        else
            cout << "The number " << num << " is not a prime" << endl;
    }
    return 0;
}
