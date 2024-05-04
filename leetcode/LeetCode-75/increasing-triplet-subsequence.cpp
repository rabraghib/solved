#include <iostream>
#include <vector>
using namespace std;

bool increasingTriplet(vector<int>& nums) {
    int32_t max1 = INT32_MAX;
    int32_t max2 = INT32_MAX;
    for (unsigned int i = 0; i < nums.size(); i++) {
        if (nums[i] <= max1)
            max1 = nums[i];
        else if (nums[i] <= max2)
            max2 = nums[i];
        else
            return true;
    }
    return false;
}
