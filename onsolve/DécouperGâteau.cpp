#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxBlackKeys(int n,int k, string status){
    vector<int> N(n); // numbre de noirs apr
    int periodsnum = 0;
    int lastnoir = 0;
    int retrn = 0;
    for (int i = 0; i < n; i++)
    {
        bool isblack = status[i] == 'N';
        if (isblack || i == n-1)
        {
            int sz = i - lastnoir;
            if (sz > 1 || !isblack)
            {
                N[periodsnum] = sz;
                periodsnum++;
            }
            if (isblack)
                lastnoir = i;
        }
        
    }
    int max = periodsnum - k;
    retrn = status.length();
    if (max <= 0 && max%2 != 0)
    {
        retrn--;
    }else
    {
        sort(N.begin(), N.begin()+periodsnum);
        for (int i = 0; i < max; i++)
        {
            retrn -= N[i];
        }
    }
    
    return retrn;
}

int main()
{
    int T, n, K;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> n >> K;
        string status;
        cin >> status;
        cout << maxBlackKeys(n,K,status) << endl;
    }
    
}