#include <iostream>

using namespace std; 
int fibonacci(int N){
	int F1 = 0, F2 = 1, Fn;
	for (int i = 2; i <= N; i++)
	{
		Fn = (F1 + F2) % 10000000007;
		F1 = F2;
		F2 = Fn;
	}
    return Fn;
}

int main()
{
	int Q, N;
	cin >> Q;
	for (int i = 0; i < Q; i++)
	{
		cin >> N;
		cout << fibonacci(N) << endl;
	}
}