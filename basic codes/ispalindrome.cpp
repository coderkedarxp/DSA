#include<iostream>
using namespace std;


int main()
{
    string str;
    cin>>str;
    bool ispalindrome = true;
    int start=0;
    int end = str.length()-1;

    for(int i=0;i<str.length();i++)
    {
        if(str[start]!=str[end])
        ispalindrome=false;
        break;
    }
    if(ispalindrome){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a palindrome";
    }

    return 0;
}