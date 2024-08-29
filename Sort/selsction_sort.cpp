#include <iostream>
using namespace std;

// pick the smallest from the unsorted part and put in the beginning

int arr[5] = {9, 3, 5, 0, 2};

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{

    for (int i = 0; i < 4; i++) 
    {
        int minindex = i;
        for (int j = i+1; j < 5; j++)
        {
            if (arr[j] < arr[minindex])
            {
                minindex = j ;
            }
           
        }
         swap(&arr[i],&arr[minindex]);
    }

    for (int k = 0; k < 5; k++)
    {
        cout<<arr[k];
    }
    

    return 0;
}