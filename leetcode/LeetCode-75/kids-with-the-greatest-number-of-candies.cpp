#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    int n = candies.size();
    vector<bool> result(n, false);
    int max = *max_element(candies.begin(), candies.end());
    for (int i = 0; i < n; i++)
        result[i] = candies[i] + extraCandies >= max;
    return result;
}
