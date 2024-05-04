#include <iostream>
#include <numeric>
#include <string>

using namespace std;

string gcdOfStrings(string str1, string str2) {
  if (str1 + str2 != str2 + str1)
    return "";
  int16_t len1 = str1.length();
  int16_t len2 = str2.length();
  return str1.substr(0, gcd(len1, len2));
}
