#include<iostream>
#include<climits>

using namespace std;
//brute force 

void max_subarray_sum(int *arr,int n)
{   
    int maxsum = INT_MIN;
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            int currSum=0;
            for(int i=start;i<=end;i++){
                currSum+=arr[i];
            }
            cout<<currSum<<",";
            maxsum = max(currSum,maxsum);
        }
        cout<<endl;
    }
     cout<<"Max subarray sum: "<<maxsum;
}

int main(){

    int arr[6] = {2,-3,6,-5,4,2};
    int size = (sizeof(arr)/sizeof(int));

    max_subarray_sum(arr,size);
    
}