class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int cnt = 0;

        while (true) {
            bool sorted = true;
            for (int i = 1; i < nums.size(); i++) {
                if (nums[i] < nums[i - 1]) {
                    sorted = false;
                    break;
                }
            }
            if (sorted) break;

            int idx = 0;
            int minSum = nums[0] + nums[1];

            for (int i = 1; i + 1 < nums.size(); i++) {
                if (nums[i] + nums[i + 1] < minSum) {
                    minSum = nums[i] + nums[i + 1];
                    idx = i;
                }
            }

            nums[idx] = minSum;
            nums.erase(nums.begin() + idx + 1);

            cnt++;
        }

        return cnt;
    }
};
