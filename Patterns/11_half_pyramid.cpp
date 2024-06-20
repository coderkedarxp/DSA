#include <iostream>
using namespace std;

int main()
{
    int inp;
    cout << "Rows : " << endl;
    cin >> inp;

    for (int i = 1; i <= inp; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}