#include <bits/stdc++.h>
using namespace std;

bool ispalindrome(string str)
{
    int start = 0;
    int end = str.length() - 1;

    while (start < end)
    {
        if (str[start] != str[end])
        {   
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main()
{

    string str;
    getline(cin, str);
    cout << ispalindrome(str);

    return 0;
}