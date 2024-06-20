#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter rows: " << endl;
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// or

// for(int i=1;i<=n;i++)
// {
// for(int j=1;j<=n-i+1;j++)
// }