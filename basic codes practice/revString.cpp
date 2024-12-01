#include <bits/stdc++.h>
using namespace std;

void revString(string &inp)
{
    int start = 0;
    int end = inp.length() - 1;

    while (start < end)
    {
        char c = inp[start];
        inp[start] = inp[end];
        inp[end] = c;

        start++;
        end--;
    }
    // cout << inp;
}

int main()
{
    string inp;
    getline(cin, inp);
    revString(inp);
    cout<<inp;
    return 0;
}