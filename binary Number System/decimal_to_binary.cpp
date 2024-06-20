#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter a decimal number: "<<endl;
    cin >> n;

    int binary = 0;
    int base = 1;

    while (n > 0)
    {
        int last_digit = n % 2;
        binary += last_digit * base;
        base *= 10;
        n /= 2;
    }

    cout << "Binary: " << binary << endl;

    return 0;
}