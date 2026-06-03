class Solution {
public:
    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(), nums.end());

        int l = 0, r = nums.back() - nums.front();

        while (l < r) {
            int m = (l + r) / 2, cnt = 0;

            for (int i = 1; i < nums.size(); i++)
                if (nums[i] - nums[i - 1] <= m)
                    cnt++, i++;

            cnt >= p ? r = m : l = m + 1;
        }

        return l;
    }
};