#include <iostream>
using namespace std;

int main()
{
    int inp;
    cout << "Rows: " << endl;
    cin >> inp;
    int ch = 65;
    for (int i = 1; i <= inp; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(ch);
            ch++;
        }
        cout << endl;
    }

    return 0;
}