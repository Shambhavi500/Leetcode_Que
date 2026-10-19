class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int count=1;
        int ans=1;

        for(int i=0; i<n-1; i++){
            if(nums[i]+1 == nums[i+1])
            count++;

            else if(nums[i]==nums[i+1])
            continue;

            else{
                count=1;
            }

            ans=max(ans,count);
        }
        
        if(n==0)
        return 0;
        else
        return ans;
    }
};
