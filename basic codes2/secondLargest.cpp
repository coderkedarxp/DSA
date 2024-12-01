#include<bits/stdc++.h>
using namespace std;

int secondLargest(int arr[], int size) {
    if (size < 2) {
        cout << "Array must have at least two elements.";
        return -1; // Return a sentinel value indicating an error.
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "No second largest element (all elements may be equal).";
        return -1;
    }

    return secondLargest;
}

int main() {
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << secondLargest(arr, size);
    return 0;
}
