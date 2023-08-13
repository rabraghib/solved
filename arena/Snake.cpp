#include <iostream>

using namespace std;

int min_possible(int x, int y) {
  if ((x + y) % 3 != 0 || 2 * min(x, y) < max(x, y)) {
    return -1;
  }

  return (x + y) / 3;
}

int main() {
  int T, X, Y;
  cin >> T;
  while (T--) {
    cin >> X >> Y;
    int min = min_possible(X, Y);
    if (min < 0) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
      cout << min << endl;
    }
  }
}
