#include <numeric>
#include <vector>

using namespace std;

int pivotIndex(vector<int> &nums) {
  int i = 0;
  int j = nums.size() - 1;
  int leftSum = 0;
  int rightSum = reduce(nums.begin(), nums.end());
  for (int i = 0; i < nums.size(); i++) {
    rightSum -= nums[i];
    if (leftSum == rightSum) {
      return i;
    }
    leftSum += nums[i];
  }
  return -1;
}
