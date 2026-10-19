class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

        int size = flowerbed.size();
        int count = 0;

        for (int i = 0; i < size; i++) {

            bool leftEmpty = (i == 0) || (flowerbed[i - 1] == 0);
            bool rightEmpty = (i == size - 1) || (flowerbed[i + 1] == 0);

            if (flowerbed[i] == 0 && leftEmpty && rightEmpty) {
                flowerbed[i] = 1;
                count++;
            }
        }

        return count >= n;
    }
};
