class Solution {
public:
    int numberOfPermutations(int n, vector<vector<int>>& r) {
        const int MOD = 1e9 + 7;
        vector<int> req(n, -1);
        int mx = 0;

        for (auto &x : r)
            req[x[0]] = x[1], mx = max(mx, x[1]);

        if (req[0] > 0) return 0;
        req[0] = 0;

        vector<vector<int>> dp(n, vector<int>(mx + 1));
        dp[0][0] = 1;

        for (int i = 1; i < n; i++)
            for (int j = 0; j <= mx; j++) {
                if (req[i] != -1 && j != req[i]) continue;
                for (int k = 0; k <= min(i, j); k++)
                    dp[i][j] = (dp[i][j] + dp[i - 1][j - k]) % MOD;
            }

        return dp[n - 1][req[n - 1]];
    }
};