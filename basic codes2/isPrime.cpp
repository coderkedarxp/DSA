#include<bits/stdc++.h>
using namespace std;

void isPrime(int num){

    if (num<2)
    {
        cout<<"Not a prime";
        return;
    }
    
    for (int i = 2; i*i <= num; i++)
    {
        if (num%i ==0)
        {
            cout<<"Not a prime";
            return;
        }
            
    }
    cout<<"Prime";
    
}

int main()
{

    int num;
    cin>>num;
    isPrime(num);

    return 0;
}