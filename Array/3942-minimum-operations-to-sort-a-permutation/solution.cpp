class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX;

        vector<int> rev(nums.rbegin(), nums.rend());

        for(int k = 0; k < n; k++) {
            bool asc = true, desc = true, revAsc = true;

            for(int i = 0; i < n; i++) {
                if(nums[(k + i) % n] != i)
                    asc = false;

                if(nums[(k + i) % n] != n - 1 - i)
                    desc = false;

                if(rev[(k + i) % n] != i)
                    revAsc = false;
            }

            if(asc)
                ans = min(ans, k);

            if(desc)
                ans = min(ans, k + 1);

            if(revAsc)
                ans = min(ans, k + 1);
        }

        return ans == INT_MAX ? -1 : ans;
    }
};
