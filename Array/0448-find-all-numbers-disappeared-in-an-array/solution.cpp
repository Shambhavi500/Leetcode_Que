class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        int n = nums.size(); // store original size
        
        vector<int> s;
        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size() - 1; i++) {
            
            if(nums[i] == nums[i+1]) continue; // skip duplicates
            
            if(nums[i] + 1 != nums[i+1]) {
                for(int j = nums[i] + 1; j < nums[i+1]; j++) {
                    s.push_back(j);
                }
            }
        }

        for(int i = 1; i < nums[0]; i++) {
            s.push_back(i);
        }

        for(int i = nums.back() + 1; i <= n; i++) {
            s.push_back(i);
        }

        return s;
    }
};
