#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int distMoney(int money, int children) {
  if (money < children)
    return -1;
  int rem = money - children;
  int maxChildren = 0;
  for (int i = 0; i <= children; i++) {
    int rem2 = rem - i * 7;
    int remChildren = children - i;
    if (rem2 < 0)
      break;
    if (remChildren == 0) {
      maxChildren = rem2 == 0 ? children : maxChildren;
    } else {
      maxChildren = remChildren == 1 && rem2 == 3 ? maxChildren : i;
    }
  }
  return maxChildren;
}
