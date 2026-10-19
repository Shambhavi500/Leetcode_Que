class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();

        int total = 1 << n;

        vector<vector<int>> subsequences;

        for (int mask = 0; mask < total; mask++) {
            vector<int> subseq;

            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    subseq.push_back(nums[i]);
                }
            }

            subsequences.push_back(subseq);
        }

        return subsequences;
    }
};
