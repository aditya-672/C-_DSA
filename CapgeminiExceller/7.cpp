// C++ implementation of right rotation
// of an array K number of times
#include <bits/stdc++.h>
using namespace std;

// Function to rightRotate array
void RightRotate(int a[], int n, int k)
{
    k = k % n;

    for (int i = 0; i < n; i++)
    {
        if (i < k)
        {
            cout << a[n + i - k] << " ";
        }
        else{
            cout<< a[i-k]<<" ";
        }
        /* code */
    }
}

// Driver code
int main()
{
    int Array[] = {1, 2, 3, 4, 5};
    int N = sizeof(Array) / sizeof(Array[0]);
    int K = 3;

    RightRotate(Array, N, K);
}

// This code is contributed by Surendra_Gangwar
