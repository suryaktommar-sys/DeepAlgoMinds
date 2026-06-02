#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<long long> arr(5);
    
    long long totalSum = 0;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        totalSum += arr[i];
    }

    long long minSum = totalSum - *max_element(arr.begin(), arr.end());
    long long maxSum = totalSum - *min_element(arr.begin(), arr.end());

    cout << minSum << " " << maxSum << endl;

    return 0;
}
