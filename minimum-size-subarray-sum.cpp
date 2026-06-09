#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
    int left = 0, sum = 0;
    int ans = INT_MAX;

    for (int right = 0; right < nums.size(); right++) {
        sum += nums[right];

        while (sum >= target) {
            ans = min(ans, right - left + 1);
            sum -= nums[left++];
        }
    }

    return ans == INT_MAX ? 0 : ans;
}

int main() {
    int target, n;
    cin >> target >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    cout << minSubArrayLen(target, nums);
}