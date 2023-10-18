#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int a = 0, b = 0;
    bool start = false;

    // Count contiguous sequences of "white" and "red" blocks
    for (int i = 0; i < n; i++) {
        if (arr[i] == "white") {
            if (!start) {
                start = true;
            }
        } else {
            if (start) {
                a++;
                start = false;
            }
        }
    }
    if (start) a++;

    start = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == "red") {
            if (!start) {
                start = true;
            }
        } else {
            if (start) {
                b++;
                start = false;
            }
        }
    }
    if (start) b++;

    // Output the minimum number of steps required
    cout << min(a + 1, b + 1) << endl;

    return 0;
}
