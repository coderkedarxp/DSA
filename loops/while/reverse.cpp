// #include <iostream>
// using namespace std;

// int main()
// {
//     int num;
//     cout << "Enter number: " << endl;
//     cin >> num;

//     while (num > 0)
//     {
//         int lastd = num % 10;
//         cout << lastd;
//         num/=10;
//     }
// }

// Reversing the entire number

#include <iostream>
using namespace std;

int main()
{
    int num=0, reverse=0;
    cout << "Enter number: " << endl;
    cin >> num;

    while (num > 0)
    {
        int last = num % 10;
        reverse = reverse * 10 + last;
        num /= 10;
    }
    cout<<reverse;
}