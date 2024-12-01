#include<bits/stdc++.h>
using namespace std;

string revStr(string str){

    int start =0;
    int end=str.length()-1;
    while(start<end){
        char ch = str[start];
        str[start]=str[end];
        str[end]=ch;

        start++;
        end--;
    }
    return str;
}
int main(){

    string str;
    getline(cin,str);

    cout<<revStr(str);

    return 0;
}