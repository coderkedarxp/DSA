#include<iostream>
using namespace std;

int main(){


    string reversed = "";
    string in;
    cin>>in;

    for(int i=in.length()-1;i>=0;i--)
    {
        reversed =  reversed + in[i];
    }
    cout<<reversed;
    return 0;

}