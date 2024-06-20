#include <iostream>
using namespace std;

int main()
{

    int input;
    cout << "Enter number: " << endl;
    cin >> input;

    for (int i = 1; i <= 10; i++)
    {
        cout << " " << input * i << " " << endl;
    }

    return 0;
}