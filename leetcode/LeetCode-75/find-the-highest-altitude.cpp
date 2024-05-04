#include <vector>

using namespace std;

int largestAltitude(vector<int> &gain) {
  int maxAlt = 0;
  int currAlt = 0;
  for (int i = 0; i < gain.size(); i++) {
    currAlt += gain[i];
    if (currAlt > maxAlt) {
      maxAlt = currAlt;
    }
  }
  return maxAlt;
}
