class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        long long ans = LLONG_MIN;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            for (int val : {100000, -100000}) {

                vector<int> temp = nums;
                temp[i] = val;

                sort(temp.begin(), temp.end());

                long long case1 = 1LL * temp[n-1] * temp[n-2] * temp[n-3];
                long long case2 = 1LL * temp[0] * temp[1] * temp[n-1];

                ans = max(ans, max(case1, case2));
            }
        }

        return ans;
    }
};
