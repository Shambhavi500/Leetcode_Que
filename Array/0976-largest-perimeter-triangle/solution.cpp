class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());

        int l1;
        int l2; 
        int l3;

        for(int i=n-1; i>=2; i--){
           
            int l1 = nums[i - 2];
            int l2 = nums[i - 1];
            int l3 = nums[i];

            if (l1 + l2 > l3)
                return l1 + l2 + l3;
        }
        return 0;
    }
};
