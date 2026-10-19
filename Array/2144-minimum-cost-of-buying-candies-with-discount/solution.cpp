class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size();
        sort(cost.begin(), cost.end(), greater<int>());

        if (n == 1) return cost[0];
        if (n == 2) return cost[0] + cost[1];

        int sum = 0;

        for (int i = 0; i < n; i++) {
            if ((i + 1) % 3 != 0) {
                sum += cost[i];
            }
        }
        return sum;
    }
};
