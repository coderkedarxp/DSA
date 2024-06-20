#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Rows: " << endl;
    cin >> rows;
    // Above Pyramid

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    // Below Pyramid

    for(int i=rows;i<=1;i--)
    {
        //Spaces
    


        //Stars


    }

    return 0;
}