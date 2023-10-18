#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int steps = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1])
            steps++;
    }

    cout << steps << endl;

    return 0;
}

