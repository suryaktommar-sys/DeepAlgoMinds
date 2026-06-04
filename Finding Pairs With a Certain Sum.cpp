class FindSumPairs {
    vector<int> a, b;
    unordered_map<int, int> mp;

public:
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        a = nums1;
        b = nums2;
        for (int x : b) mp[x]++;
    }

    void add(int index, int val) {
        mp[b[index]]--;
        b[index] += val;
        mp[b[index]]++;
    }

    int count(int tot) {
        int ans = 0;
        for (int x : a)
            ans += mp[tot - x];
        return ans;
    }
};