class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int a = 0; // count
        int b = 0; // candidate

        for (int i = 0; i < nums.size(); i++) {
            if (a == 0) {
                b = nums[i];
            }
            a += (nums[i] == b) ? 1 : -1;
        }
        return b;
    }
};
