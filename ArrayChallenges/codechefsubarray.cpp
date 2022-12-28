// You are given an array AA of length NN.

// Find the maximum length of any subarray of AA, such that, the bitwise OR of all the elements of the subarray is equal to the bitwise OR of the remaining elements of the array.

// Report -1−1 if no such subarray exists.

#include <iostream>
using namespace std;

int main()
{
    int testcase;

    cin >> testcase;
    while (testcase > 0)
    {
        int n = 0, max = 0, bw = 0, a = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int j = 1; j < n - 1; j++)
        {
            bw = arr[0] | arr[1];
            a = arr[j] | arr[j + 1];
            if (bw == a)
            {   
                max++;
            }
            else
            {
                bw = arr[j] | arr[j + 1];
            }
        }
        if (max == 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << max << endl;
        }
        testcase--;
    }

    return 0;
}