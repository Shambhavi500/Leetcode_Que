class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mul;
        int nega;
        int count=0;
        int n=nums.size();

            mul=nums[n-1]*nums[n-2]*nums[n-3];

            nega=nums[0]*nums[1]*nums[n-1];

        return max(mul,nega);
    }
};
