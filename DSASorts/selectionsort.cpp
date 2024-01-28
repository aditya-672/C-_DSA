#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int a = 0; a < n; a++)
    {
        cin >> arr[a];
    }

    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for(int c=0;c<n;c++){
        cout<<arr[c]<<endl;
    }

    return 0;
}