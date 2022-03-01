#include <iostream>
using namespace std;

int main()
{
    int n, i, j, k, g, h;
    cin >> n;
    g = (n + 3) / 4;
    h = (n) / 2;
    k = (n + 1) / 4;
    for (i = 1; i <= k; i++)
        cout << "  * ";
    cout << endl;
    for (j = 1; j <= h; j++)
        cout << " *";
    cout << endl;
    for (k = 1; k <= g; k++)
        cout << "*   ";
    cout << endl;
    return 0;
}