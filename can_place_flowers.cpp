class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if (n == 0) {
            return true;
        }
        int i = 0, count = 0;
        while (i < flowerbed.size()) {
            if (flowerbed[i] == 1) {
                i += 2;
            } else if ((i == 0 || flowerbed[i - 1] == 0) &&
                       (i == (flowerbed.size() - 1) || flowerbed[i + 1] == 0)) {
                count++;
                i += 2;
                if (count == n) {
                    return true;
                }
            } else {
                i++;
            }
        }
        return false;
    }
};
