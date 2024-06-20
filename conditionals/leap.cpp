// Method 1

// #include <iostream>
// using namespace std;

// int main()
// {
//     int year;
//     cout << "Enter year: ";
//     cin >> year;

//     if((year%4 == 0 && year%100 != 0) || (year%100 == 0 && year%400 == 0))
//     cout<<"leap year : "<<year<<endl;
//     else
//     cout<<"NOT a leap year : "<<year<<endl;

//     return 0;
// }

// Method 2

#include <iostream>
using namespace std;
int main()
{
    int year;
    cin >> year;
    if (year % 400 == 0)
    {
        cout << year << "isaleapyear.\n";
    }
    else if (year % 100 == 0)
    {
        cout << year << "isNOTaleapyear.\n";
    }
    else if (year % 4 == 0)
    {
        cout << year << "isaleapyear.\n";
    }
    else
    {
        cout << year << "isNOTaleapyear.\n";
    }
    return 0;
}
