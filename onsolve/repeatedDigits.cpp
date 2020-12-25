#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N,a;
    cin >> N;
    vector<int> nums(N);
    for (int i = 1; i <= N; i++)
    {
        cin >> a;
        int index = find(nums.begin(), nums.end(), a) - nums.begin();
        if (index < N) {
            nums[index] = 0;
            i-= 2;
            N-= 2;
        }
        else {
            nums[i-1] = a;
        }
    }
    cout << nums[0] << endl;
}