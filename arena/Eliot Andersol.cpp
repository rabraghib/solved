#include <iostream>

using namespace std;

void math_plane(int x1, int y1, int z1, int x2, int y2, int z2,
    int x3, int y3, int z3, int x, int y, int z)
{
    int a1 = x2 - x1;
    int b1 = y2 - y1;
    int c1 = z2 - z1;
    int a2 = x3 - x1;
    int b2 = y3 - y1;
    int c2 = z3 - z1;
    int a = b1 * c2 - b2 * c1;
    int b = a2 * c1 - a1 * c2;
    int c = a1 * b2 - b1 * a2;
    int d = (-a * x1 - b * y1 - c * z1);

    if (a * x + b * y + c * z + d == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

}


int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int x1, y1, z1;
        int x2, y2, z2;
        int x3, y3, z3;
        int x4, y4, z4;

        cin >> x1 >> y1 >> z1;
        cin >> x2 >> y2 >> z2;
        cin >> x3 >> y3 >> z3;
        cin >> x4 >> y4 >> z4;


        for (int i = 4; i < N; i++)
        {
            int x, y, z;
            cin >> x >> y >> z;
        }


        math_plane(x1, y1, z1, x2, y2, z2, x3, y3, z3, x4, y4, z4);

    }
    return 0;
}
