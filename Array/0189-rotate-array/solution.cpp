class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>store;
        int n=nums.size();
        k=k%n;
        
        for(int i=n-k; i<n; i++){
            store.push_back(nums[i]);
        }
        nums.erase(nums.begin() + (n - k), nums.end());
        store.insert(store.end(), nums.begin(), nums.end());
        nums=store;
    }
};
