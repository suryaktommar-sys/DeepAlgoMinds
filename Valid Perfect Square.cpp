#include <iostream>
using namespace std;

bool isPerfectSquare(int num) {
    long long l = 1, r = num;

    while (l <= r) {
        long long mid = l + (r - l) / 2;
        long long sq = mid * mid;

        if (sq == num)
            return true;
        else if (sq < num)
            l = mid + 1;
        else
            r = mid - 1;
    }

    return false;
}

int main() {
    int num;
    cin >> num;

    cout << (isPerfectSquare(num) ? "true" : "false");
}