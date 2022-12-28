// Problem : An arithmetic array is an array that contains at least two integers and the differences between consecutive integers are equal.For example, [ 9, 10 ], [ 3, 3, 3 ], and[ 9, 7, 5, 3 ] are arithmetic arrays, while[1, 3, 3, 7], [ 2, 1, 2 ], and[ 1, 2, 4 ] are not arithmetic arrays.
// Sarasvati has an array of N non - negative integers.The i - th integer of the array is A.She wants to choose a contiguous arithmetic subarray from her array that has the maximum length.Please help her to determine the length of the longest contiguous arithmetic subarray.

// Arithmetic Subarray - Difference between 2 elements is same 

#include<iostream>
using namespace std;

int main(){
    int count = 0,n,j=2;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int pd = arr[0] - arr[1];
    while(j<=n){
        if(pd == arr[j-1] - arr[j]){
            count++;
        }
        else{
            pd = arr[j-1] - arr[j];
        }
        j++;
    }
    cout<<count+1;
    return 0;
}