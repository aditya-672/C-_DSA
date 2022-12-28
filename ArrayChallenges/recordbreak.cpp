// Problem:
// Isyana is given the number of visitors at her local theme park on N consecutive days. The number of visitors on the i-th day is V. A day is record breaking if it satisfies both of the following conditions:
// The number of visitors on the day is strictly larger than the number of visitors on each of the previous days.
// Either it is the last day, or the number of visitors on the day is strictly larger than the number of visitors on the following day.
// Note that the very first day could be a record breaking day!
// Please help Isyana find out the number of record breaking days.

#include<iostream>
using namespace std;

int main(){
    int n,max=0,rc=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for(int j=0;j<n;j++){
        if(arr[j]>max && arr[j]>arr[j+1]){
            max = arr[j];
            rc++;
        }
    }
    cout<<rc;

    return 0;
}