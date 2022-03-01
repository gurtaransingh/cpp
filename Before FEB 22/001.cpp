#include <iostream>
using namespace std;

int main()
{
    int a, b, n, x;
    cin >> a >> b;
    for (n = a; n < b; n++)
    {
        for (x = 2; x < n; x++)
            if (n % x == 0)
            {
                cout << n << endl;
                break;
            }
    }
    return 0;
}