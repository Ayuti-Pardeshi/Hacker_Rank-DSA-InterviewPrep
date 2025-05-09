#include <iostream>
#include <vector>
using namespace std;

// Function to reverse the array
vector<int> reverseArray(vector<int> arr) {
    int start = 0;
    int end = arr.size() - 1;

    while (start < end) {
        // Swap elements at start and end
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    return arr;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result = reverseArray(arr);

    for (int val : result) {
        cout << val << " ";
    }

    cout << endl;
    return 0;
}
