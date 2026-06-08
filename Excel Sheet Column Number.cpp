#include <iostream>
#include <string>
using namespace std;

int titleToNumber(string columnTitle) {
    int ans = 0;

    for (char c : columnTitle) {
        ans = ans * 26 + (c - 'A' + 1);
    }

    return ans;
}

int main() {
    string s;
    cin >> s;

    cout << titleToNumber(s);
    return 0;
}