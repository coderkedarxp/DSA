#include <iostream>
using namespace std;

int main()
{
    int num, divisors = 0;
    cout << "enter NUmber: " << endl;
    cin >> num;

    if (num == 1)
        cout << "1 is not a prime number" << endl;
    else
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
                divisors++;
        }
        if (divisors == 0)
            cout << "THe number " << num << " is prime" << endl;
        else
            cout << "Not a prime";
    }
    return 0;
}