#include <iostream>
using namespace std;

int main()
{
    int inp;
    cout << "ROWS: " << endl;
    cin >> inp;
    for (int i = 1; i <= inp; i++)
    {
        for (int j = 1; j <= inp - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}