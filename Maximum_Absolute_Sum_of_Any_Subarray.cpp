#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxEnding = 0, minEnding = 0;
        int maxSum = 0, minSum = 0;

        for(int num : nums) {
            maxEnding = max(num, maxEnding + num);
            maxSum = max(maxSum, maxEnding);

            minEnding = min(num, minEnding + num);
            minSum = min(minSum, minEnding);
        }

        return max(maxSum, abs(minSum));
    }
};