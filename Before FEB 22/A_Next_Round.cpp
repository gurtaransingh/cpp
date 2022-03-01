#include <iostream>
using namespace std;

int main()
{
    int n, b, a, g, count = 0;
    string x;
    x[0]=0;
    cin >> n >> b;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        x[i] = a;
        if (x[i] == x[i - 1])
        {
            g = g + 1;
        }

        if (x[1] == 0)
        {
            g = 0;
            break;
        }

        else if (x[i] == b)
        {
            count++;
            g = i - count;
            // break;
        }
    }
    cout << g;
    return 0;
}