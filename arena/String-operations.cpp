#include <iostream>
#include <string>

using namespace std;

int main()
{
  int init_length, num_opsc1 = 0, num_opsc2 = 0;
  string S, S2;
  cin >> S;
  S2 = S;

  int search = S.find("0");
  while (search != string::npos)
  {
    int old_search = search;

    S.erase(search, 1);

    search = S.find("0");
    if (search != old_search)
    {
      num_opsc1++;
    }
  }

  int search2 = S2.find("1");
  while (search2 != string::npos)
  {
    int old_search = search2;

    S2.erase(search2, 1);

    search2 = S2.find("1");
    if (search2 != old_search)
    {
      num_opsc2++;
    }
  }

  if (num_opsc2 > num_opsc1)
    cout << num_opsc1 << endl;
  else
    cout << num_opsc2 << endl;

  return 0;
}
