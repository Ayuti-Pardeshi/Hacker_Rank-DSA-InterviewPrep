#include <iostream>
using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    if (v1 == v2) {
        if (x1 == x2) {
            return "YES";
        } else {
            return "NO";
        }
    }

    int numerator = x2 - x1;
    int denominator = v1 - v2;

    // Check if division is valid and result is non-negative
    if (denominator == 0) {
        return "NO";
    }

    if (numerator % denominator != 0) {
        return "NO";
    }

    int n = numerator / denominator;

    if (n >= 0) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;

    string result = kangaroo(x1, v1, x2, v2);
    cout << result << endl;

    return 0;
}
