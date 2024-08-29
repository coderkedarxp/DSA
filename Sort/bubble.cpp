#include <iostream>
using namespace std;

int arr[5] = {9, 3, 0, 2, 4};

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            if (arr[i] > arr[i + 1])
                swap(&arr[i], &arr[i + 1]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }
    return 0;
}