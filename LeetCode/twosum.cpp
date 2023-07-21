#include <iostream>
using namespace std;
#include <vector>
class Solution
{
public:
    int *arr;
    int target;
    int size;

    Solution(int *arr, int size, int target)
    {
        this->arr = arr;
        this->size = size;
        this->target = target;
    }

    vector<int> check()
    {
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (arr[i] + arr[j] == target)
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    Solution s(arr, size, 6);

    vector<int> result = s.check();

    // if (!result.empty())
    // {
    //     cout << "Positions: " << result[0] << ", " << result[1] << endl;
    //     cout << "Values: " << arr[result[0]] << ", " << arr[result[1]] << endl;
    // }
    // else
    // {
    //     cout << "No solution found." << endl;
    // }

    cout<<"["<<result[0]<<","<<result[1]<<"]"<<endl;
    return 0;
}
