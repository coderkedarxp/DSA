#include <iostream>
using namespace std;

bool isprime(int n)
{
    if (n == 1)
    {
        return false;
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            if (n % i == 0)
                return false;
            else
                return true;
        }
    }
}

void printprime(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (isprime(i)){}
            cout << i << " ";
    }
}
int main()
{
    int n;
    cout << "Number: ";
    cin >> n;

    printprime(n);

    return 0;
}