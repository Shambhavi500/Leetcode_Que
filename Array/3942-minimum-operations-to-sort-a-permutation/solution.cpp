class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)return 0;

        int zero = 0;
        for(int a = 0 ;a < n ; a++){
            if(nums[a] == 0) {zero = a;break;}
        }

        bool asc = true;
        bool desc = true;

        for(int a = 1; a < n; a++){
            int prev = (zero + a - 1) % n;
            int curr = (zero + a) % n;

            if(nums[prev] > nums[curr]){
                asc = false;
            }

            prev = (zero - a + 1 + n) % n;
            curr = (zero - a + n) % n;

            if(nums[prev] > nums[curr]){
                desc = false;
            }
        }

        if(asc) return min(zero, n - zero + 2);
        if(desc) return min(zero + 2, n - zero);

        return -1;
    }
};
