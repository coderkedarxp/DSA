#include<bits/stdc++.h>
using namespace std;

bool isPrime(int input){
    if(input<=1){
        return false;
    }
    for (int i = 2; i*i <= input ; i++)
    {
        if(input%i ==0){
            return false;
        }
    }
    return true;
}

int main(){

    int input;
    cin>>input;

    cout<<isPrime(input);
    return 0;
}