#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string anagram(string first, string sacend)
{
  int m = first.length() - 1;
  if (first[0] != sacend[0] || first[m] != sacend[m] || first.length() != sacend.length())
  {
    return "Azuz is not my leader";
  }
  sort(first.begin(), first.end());
  sort(sacend.begin(), sacend.end());
  if (first != sacend)
    return "Azuz is not my leader";
  return "Awesome anagram";
}

int main()
{
  int T, n;
  string first, sacend;
  cin >> T;
  while (T--)
  {
    cin >> first >> sacend;
    cout << anagram(first, sacend) << endl;
  }
}
