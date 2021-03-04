#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N, M;
    bool empty = true;
    cin >> N >> M;
    vector<int> A(N);
    vector<int> B(M);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < M; i++)
    {
        cin >> B[i];
    }
    
    int i = 0, j = 0; 
    while (i < N && j < M) { 
        if (A[i] < B[j]) {
            i++; 
        }
        else if (B[j] < A[i]) {
            j++; 
        }
        else 
        { 
            cout << A[i] << " ";
            empty = false;
            i++; 
            j++; 
        } 
    } 
    if (empty)
    {
        cout << "Empty" << endl;
    }
}