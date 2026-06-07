#include <bits/stdc++.h>
using namespace std;

vector<int> closestNumbers(vector<int> arr) {
    sort(arr.begin(), arr.end());

    int minDiff = INT_MAX;

    for (int i = 1; i < arr.size(); i++) {
        minDiff = min(minDiff, arr[i] - arr[i - 1]);
    }

    vector<int> result;

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] - arr[i - 1] == minDiff) {
            result.push_back(arr[i - 1]);
            result.push_back(arr[i]);
        }
    }

    return result;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> ans = closestNumbers(arr);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}