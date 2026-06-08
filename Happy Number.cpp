#include <iostream>
#include <unordered_set>
using namespace std;

bool isHappy(int n) {
    unordered_set<int> seen;

    while (n != 1 && !seen.count(n)) {
        seen.insert(n);

        int sum = 0;

        while (n) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }

        n = sum;
    }

    return n == 1;
}

int main() {
    int n;
    cin >> n;

    cout << (isHappy(n) ? "true" : "false");
    return 0;
}