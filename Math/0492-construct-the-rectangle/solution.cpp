class Solution {
public:
    vector<int> constructRectangle(int area) {

        int diff = INT_MAX;
        vector<int> ans;

        for (int w = 1; w <= area; w++) {

            if (area % w == 0) {

                int l = area / w;

                if (l >= w && l - w < diff) {
                    diff = l - w;
                    ans = {l, w};
                }
            }
        }

        return ans;
    }
};
