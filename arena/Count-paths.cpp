#include <iostream> 
#include <vector>

using namespace std;

int num_paths(int m, int n,vector<vector<int>>* memory)
{
    int result;

    if (m == 1 || n == 1){
        result = 1;
    }else if (memory->at(n)[m]){
        result = memory->at(n)[m];
    }else{
        result = (num_paths(m - 1, n,memory) + num_paths(m, n - 1,memory))% 1000000007;
    }
    memory->at(n)[m] = result;
    return result;
}

int main()
{
    int T, m, n;
    vector<vector<int>> memory(1000, vector<int> (1000));
    cin >> T;
    while (T--)
    {
        cin >> m >> n;
        cout << num_paths(m, n,&memory) << endl;
    }
}
