#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sorting(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// void printArr(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

string qualify(int a, int b, int sem1[], int sem2[])
{
    // sorting(sem1, a); 
    // sorting(sem2, a);

    int sum = 0;
    int subOfSems[a];

    for (int i = 0; i < a; i++)
    {
        subOfSems[i] = sem1[i] - sem2[i];
    }

    sorting(subOfSems,a);

    for (int i = 0; i < b; i++)
    {
        sum += subOfSems[i];
    }

    if (sum >= 35)
    {
        return "Qualified";
    }
    else
    {
        return "Disqualified";
    }

    // printArr(sem1,a);
    // printArr(sem2,a);
}

int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    int sem1[a];
    int sem2[a];
    for (int i = 0; i < a; i++)
    {
        cin >> sem1[i];
    }
    for (int i = 0; i < a; i++)
    {
        cin >> sem2[i];
    }
    cout << qualify(a, b, sem1, sem2);

    return 0;
}