class Solution {
public:
    int maxArea(vector<int>& h) {
        int left = 0;
        int right = h.size() - 1;
        int ans = 0;

        while (left < right) {
            int height = min(h[left], h[right]);
            int width = right - left;
            ans = max(ans, height * width);

            if (h[left] < h[right])
                left++;
            else
                right--;
        }
        return ans;
    }
};
