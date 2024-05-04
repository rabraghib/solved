#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int total = 1;
    vector<int32_t> result(nums.size(), 1);
    int zeroIndex = -1;
    for (size_t i = 0; i < nums.size(); i++) {
        if (nums[i] == 0) {
            if (zeroIndex >= 0) {
                return vector<int>(nums.size(), 0);
            } else {
                zeroIndex = i;
                continue;
            }
        }
        total *= nums[i];
    }
    if (zeroIndex >= 0) {
        result = vector<int>(nums.size(), 0);
        result[zeroIndex] = total;
        return result;
    }
    for (size_t i = 0; i < nums.size(); i++) {
        result[i] = total / nums[i];
    }
    return result;
}
