#include <iostream>
using namespace std;

int main()
{

    int num, sum = 0, lastdigit, org;
    cout << "Enter number: " << endl;
    cin >> num;
    org = num;
    while (num > 0)
    {
        lastdigit = num % 10;
        sum += (lastdigit * lastdigit * lastdigit);
        num /= 10;
    }

    if (sum == org)
    {
        cout << "Number " << org << " is an Armstrong" << endl;
    }
    else
    {
        cout << "Not an Armstrong";
    }
    return 0;
}