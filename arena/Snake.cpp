/*
#include <iostream>
#include <algorithm>

using namespace std;

int meet(int x,int y) {
    int total = x + y;
    if ((total)%3 == 0 && x%3 == 0 && y%3 == 0){
		cout << "YES" << endl;
		cout << (total/3) << endl;
    }else{
		cout << "NO" << endl;
    }
}

int main()
{
	int T, X, Y;
	cin >> T;
	while (T--)
	{
		cin >> X >> Y;
		meet(X,Y);
	}
}
*/
#include <iostream>
#include <algorithm>

using namespace std;

int min_possible(int x,int y,int current_set) {
	if ((x + y) < 3)
	{
		return -1;
	}
	if ((x + y)%3 == 0)
	{
		return current_set + ((x + y)/3);
	}
	int case1 = min_possible(x-1,y-2, current_set+1);
	int case2 = min_possible(x-2,y-1, current_set+1);
	if (case1 >= 0 || case2 >= 0)
	{
		return current_set + min(case1,case2);
	}
    return -1;
}

int main()
{
	int T, X, Y;
	cin >> T;
	while (T--)
	{
		cin >> X >> Y;
		int min = min_possible(X,Y,0);
		if (min < 0)
		{
			cout << "NO" << endl;
		}
		else
		{
			cout << "YES" << endl;
			cout << min << endl;
		}
	}
}