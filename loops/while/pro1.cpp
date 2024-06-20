#include <iostream>
using namespace std;

int main()
{
    int num, temp, sum = 0;
    cout << "Enter number : " << endl;
    cin >> num; // 15

    // while(num!=0)
    while (num > 0)
    {
        temp = num % 10;
        sum += temp;
        num = num / 10;
    }
    cout << "sum : " << sum << endl;
}