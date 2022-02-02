#include <iostream>
#include <vector>

using namespace std;

int LongestIncreasingSubsequences(vector<int> arr, int n)
{
  int longestIncreasing = 0;
  vector<int> vec(n, 1);

  for (int i = 1; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      if (arr[i] > arr[j] && vec[i] < vec[j] + 1)
      {
        vec[i] = vec[j] + 1;
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    if (longestIncreasing < vec[i])
      longestIncreasing = vec[i];
  }
  return longestIncreasing;
}

int main()
{
  int N;
  cin >> N;
  vector<int> a(N);
  for (int i = 0; i < N; i++)
  {
    cin >> a[i];
  }
  cout << LongestIncreasingSubsequences(a, N) << endl;
}
