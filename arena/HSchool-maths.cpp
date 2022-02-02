#include <iostream>
#include <vector>

using namespace std;

int coPrimesNumber(int n)
{
  int result = n;
  for (int p = 2; p * p <= n; ++p)
  {
    if (n % p == 0)
    {
      while (n % p == 0)
        n /= p;

      result -= result / p;
    }
  }
  if (n > 1)
    result -= result / n;
  return result;
}

int main()
{
  int T, n; // 1 <= n <= 10^9
  cin >> T;
  while (T--)
  {
    cin >> n;
    cout << coPrimesNumber(n) << endl;
  }
  return 0;
}
