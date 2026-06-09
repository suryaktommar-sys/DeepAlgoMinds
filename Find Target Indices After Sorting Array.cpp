#include <iostream>
#include <vector>
using namespace std;

vector<int> targetIndices(vector<int>& nums, int target) {
    int less = 0, equal = 0;

    for (int x : nums) {
        if (x < target) less++;
        else if (x == target) equal++;
    }

    vector<int> ans;

    for (int i = 0; i < equal; i++)
        ans.push_back(less + i);

    return ans;
}

int main() {
    int n, target;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    cin >> target;

    vector<int> ans = targetIndices(nums, target);

    for (int x : ans)
        cout << x << " ";
}