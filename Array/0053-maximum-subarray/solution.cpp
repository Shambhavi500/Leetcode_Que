class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current=0;
        int max_sum=nums[0];

        for(int x: nums){
            current=max(current+x , x);
            max_sum=max(max_sum , current);
        }
        return max_sum;
    }
};
