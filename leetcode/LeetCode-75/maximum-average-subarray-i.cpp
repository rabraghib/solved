#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

double findMaxAverage(vector<int> &nums, int k) {
  int sum = 0;
  for (unsigned int i = 0; i < k; i++) {
    sum += nums[i];
  }
  int maxSum = sum;
  for (unsigned int i = 1; i <= nums.size() - k; i++) {
    sum -= nums[i - 1];
    sum += nums[i - 1 + k];
    maxSum = max(sum, maxSum);
  }
  return (double)maxSum / k;
}
