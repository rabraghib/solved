#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int maxOperations(vector<int> &nums, int k) {
  int result = 0;
  int i = 0, j = nums.size() - 1;
  sort(nums.begin(), nums.end());
  while (i < j) {
    if (nums[i] + nums[j] == k) {
      i++;
      j--;
      result++;
    } else if (nums[i] + nums[j] < k) {
      i++;
    } else {
      j--;
    }
  }
  return result;
}
