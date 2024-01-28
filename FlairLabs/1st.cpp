#include <iostream>
using namespace std;

bool isWaveArray(int arr[], int n)
{

    bool result = false;

    /* Check the wave form
     * If arr[1] is greater than left and right
     * Same pattern will be followed by whole
     * elements, else reverse pattern
     * will be followed by array elements
     */
    if (arr[1] > arr[0] && arr[1] > arr[2])
    {
        for (int i = 1; i < n - 1; i += 2)
        {

            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            {
                result = true;
            }
            else
            {
                result = false;
                break;
            }
        }

        // Check for last element
        if (result == true && n % 2 == 0)
        {
            if (arr[n - 1] <= arr[n - 2])
            {
                result = false;
            }
        }
    }
    else if (arr[1] < arr[0] && arr[1] < arr[2])
    {
        for (int i = 1; i < n - 1; i += 2)
        {

            if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1])
            {
                result = true;
            }
            else
            {
                result = false;
                break;
            }
        }

        // Check for last element
        if (result == true && n % 2 == 0)
        {
            if (arr[n - 1] >= arr[n - 2])
            {
                result = false;
            }
        }
    }

    return result;
}

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

bool wavesort(int arr[], int n)
{

    for (int i = 1; i < n; i += 2)
    {

        if (arr[i] > arr[i - 1])
        {
            swap(arr, i, i - 1);
        }
        if (arr[i] > arr[i + 1] && i <= n - 2)
        {
            swap(arr, i, i + 1);
        }
    }

    return isWaveArray(arr, 7);
}

int main()
{

    int arr[] = {1, 3, 4, 7, 5, 6, 2};

    bool val = wavesort(arr, 7);

    string res;
    if (val)
    {
        res = "true";
    }
    else
    {
        res = "false";
    }

    cout << res << endl;

    return 0;
}