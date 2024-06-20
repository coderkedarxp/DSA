#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number : " << endl;
    cin >> num;
    int temp, sum = 0;
    while (num > 0)
    {
        temp = num % 10;
        if(temp%2 !=0)
        sum += temp;
        
        num /= 10;

    }
    cout<<"SUM: "<<sum<<endl;
}