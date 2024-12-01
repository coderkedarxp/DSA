#include<bits/stdc++.h>
using namespace std;

int fact(int num){

    if(num==0||num==1){
        return 1;
    }
    int facto = 1;
    // 5*4*3*2*1
    for (int i = num; i >= 1 ; i--)
    {
        facto*=i;
    }
    return facto;
}

int main(){

    int num;
    cin>>num;
    cout<<fact(num);

    return 0;
}