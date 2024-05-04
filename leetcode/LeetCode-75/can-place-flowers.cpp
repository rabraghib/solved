#include <iostream>
#include <vector>
using namespace std;

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    if (n == 0)
        return true;
    int totalSpots = flowerbed.size();
    for (size_t i = 0; i < totalSpots; i++) {
        if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && (i == totalSpots - 1 || flowerbed[i + 1] == 0)) {
            flowerbed[i] = 1;
            return canPlaceFlowers(flowerbed, n - 1);
        }
    }

    return false;
}
