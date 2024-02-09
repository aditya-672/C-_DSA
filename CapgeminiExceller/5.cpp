#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

void removeDuplicates(int arr[], int &n)
{
    map<int, bool> seen;

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (!seen[arr[i]])
        {
            arr[j++] = arr[i];
            seen[arr[i]] = true;
        }
    }
    n = j; // Update the size of the array
}

void mergeArray(int arr1[], int n1, int arr2[], int n2, int mergeArr[], int &mergeSize)
{
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            mergeArr[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            mergeArr[k] = arr2[j];
            k++;
            j++;
        }
    }

    while (i < n1)
    {
        mergeArr[k] = arr1[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        mergeArr[k] = arr2[j];
        k++;
        j++;
    }

    mergeSize = k;
}

int main()
{
    int arr1[] = {3, 1, 1, 2};
    int arr2[] = {4, 3, 3, 2, 1};

    int n1 = (sizeof(arr1) / sizeof(arr1[0]));
    int n2 = (sizeof(arr2) / sizeof(arr2[0]));

    removeDuplicates(arr1, n1);
    removeDuplicates(arr2, n2);

    for (int i = 0; i < n1; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n2; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    int mergedSize = n1 + n2;
    int mergeArr[mergedSize];

    mergeArray(arr1, n1, arr2, n2, mergeArr, mergedSize);

    sort(mergeArr, mergeArr + mergedSize);

    for (int i = 0; i < mergedSize; i++)
    {
        cout << mergeArr[i] << " ";
    }
    cout << endl;
    int median = 0;

    if (mergedSize%2==0)
    {
        median = (mergeArr[mergedSize/2 - 1] + mergeArr[mergedSize/2]) / 2.0;
    }
    else {
        median = mergeArr[mergedSize/2];
    }

    cout<<median;

    return 0;
}