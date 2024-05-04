#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    unsigned short lastIndex = 0;
    for (unsigned short i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            nums[lastIndex] = nums[i];
            lastIndex++;
        }
    }
    while (lastIndex < nums.size()) {
        nums[lastIndex] = 0;
        lastIndex++;
    }
}
