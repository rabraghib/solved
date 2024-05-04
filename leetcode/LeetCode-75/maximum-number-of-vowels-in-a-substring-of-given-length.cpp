#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int maxVowels(string s, int k) {
  int firstVowel = -1;
  int length = s.length();
  for (unsigned int i = 0; i < length; i++) {
    if (isVowel(s[i])) {
      firstVowel = i;
      break;
    }
  }
  if (firstVowel == -1 || firstVowel >= length - k)
    return 0;
  int vowleCount = 0;
  int maxVowleCount = 1;
  for (unsigned int i = firstVowel; i <= length - k; i++) {
    vowleCount = 0;
    for (unsigned int j = 0; j < k; j++) {
      if (isVowel(s[i])) {
        vowleCount++;
      }
    }
    maxVowleCount = max(vowleCount, maxVowleCount);
  }
  return maxVowleCount;
}

bool isVowel(char c) {
  return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
