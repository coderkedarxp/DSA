// Kadane's algorithm
// when the value if some addition is less than 0 then dont take it for addition
// or reinitialize the sum to zero

// take sum of every digit with the current sum and if at any point the sum is 0 or negative then reinitializa the current sum to 0

#include <stdio.h>
#include <climits>
using namespace std;

#include <algorithm>

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int sum = 0, size;
    int maxsum = INT_MIN;

    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++){
        sum += arr[i];
        maxsum = max(maxsum, sum);
        if (sum < 0)
            sum = 0;
    }

    cout << "Maximum subarray sum: " << maxsum << endl;

    return 0;
}