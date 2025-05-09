#include <iostream>
#include <vector>
using namespace std;

long long sumArray(vector<int> arr) {
    long long total = 0;
    for (int num : arr) {
        total += num; // Use long long to avoid overflow
    }
    return total;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << sumArray(arr) << endl;
    return 0;
}
