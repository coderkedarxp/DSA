#include <bits/stdc++.h>
using namespace std;

void maxArr(int arr[], int size)
{
    int max = arr[0];
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            index = i;
        }
    }
    cout << max<<endl;
    cout << index;
}
          
int main()
{

    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    maxArr(arr, size);
    return 0;
}