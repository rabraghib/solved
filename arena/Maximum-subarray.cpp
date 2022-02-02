#include <iostream>

using namespace std;

int main()
{
  int N, big_sum = 0, sum = 0, num;
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    cin >> num;
    sum += num;
    if (sum < 0)
      sum = 0;

    if (sum > big_sum)
      big_sum = sum;
  }
  cout << big_sum << endl;
}
