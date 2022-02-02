#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int N, k, b; // k < number of elements
  int index = 0, size = 0;
  long long int sum = 0;
  cin >> N >> k;
  vector<long long int> array(1000000);

  // get all input values
  for (int i = 0; i < N; i++)
  {
    cin >> b;
    size += b;
    for (int j = 0; j < b; j++)
    {
      cin >> array[index];
      index++;
    }
  }

  sort(array.begin(), array.begin() + size);
  //sort(array.begin(),array.end());

  for (int i = 0; i < k; i++)
  {
    sum += array[i];
  }

  cout << sum << endl;
}
