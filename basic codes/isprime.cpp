#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    
    bool isprime = true;

    if (num <= 1)
    {
        cout << "Not a prime";
    }
    else
    {
        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                cout << "Not a prime";
                isprime =false;
                break;
            }
        }
        
        if(isprime)
        cout<<"Prime";
    }
    return 0;
}