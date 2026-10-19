class Solution {
public:
    int singleNumber(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        if ((i == 0 || nums[i] != nums[i - 1]) &&
            (i == n - 1 || nums[i] != nums[i + 1])) {
            return nums[i];
        }
    }
    return -1;
}

};
