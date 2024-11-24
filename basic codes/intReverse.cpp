#include<iostream>
using namespace std;

int main(){

    int in,reverse =0;
    cin>>in;

    while(in>0){
        reverse = reverse*10 + in%10;
        in /= 10;
    }
    cout<<reverse;
    return 0;
}