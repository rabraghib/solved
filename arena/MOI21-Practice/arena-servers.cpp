#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int T;
  cin >> T;
  for (int i = 0; i < T; i++)
  {
    int N, C, numservers = 0;
    cin >> N >> C;
    for (int i = 0; i < N; i++)
    {
      long int a = 0.0;
      cin >> a;
      numservers += ceil(1.0 * a / C);
    }
    cout << numservers << endl;
  }
  return 0;
}
