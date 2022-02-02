#include <iostream>
#include <string>

using namespace std;

int main()
{
  int T;
  cin >> T;
  string population, new_pop;
  for (int i = 0; i < T; i++)
  {
    new_pop = "";
    int num_days = 0, index = 0;
    cin >> population;

    int search = population.find('c');
    if (search != string::npos)
    {
      while (search != string::npos)
      {

        if (abs(search - index) > num_days)
          num_days = abs(search - index);

        new_pop += population.at(search);
        population[search] = '_';

        index = search + 1;
        search = population.find('c');
      }
    }
    new_pop += population.substr(index);
    cout << num_days << " " << new_pop << endl;
  }
  return 0;
}
