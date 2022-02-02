#include <iostream>
#include <string>

using namespace std;

int main()
{
  string population;

  cin >> population;

  if (population.find('c') != string::npos)
  {
    cout << "Stay Home";
  }
  else
  {
    cout << "Safe";
  }

  return 0;
}
