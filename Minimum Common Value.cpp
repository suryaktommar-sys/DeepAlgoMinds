#include <iostream>
#include <vector>
using namespace std;

int getCommon(vector<int>& nums1, vector<int>& nums2) {
    int i = 0, j = 0;

    while (i < nums1.size() && j < nums2.size()) {
        if (nums1[i] == nums2[j])
            return nums1[i];

        if (nums1[i] < nums2[j])
            i++;
        else
            j++;
    }

    return -1;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> nums1(n), nums2(m);

    for (int i = 0; i < n; i++) cin >> nums1[i];
    for (int i = 0; i < m; i++) cin >> nums2[i];

    cout << getCommon(nums1, nums2);
}