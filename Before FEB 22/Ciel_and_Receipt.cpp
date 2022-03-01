#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t, p;
    cin >> t;
    while (t > 0)
    {
        cin >> p;
        int j, count = 0;
        while (p > 2048)
        {
            count++;
            p = p - 2048;
        }
        for (int i = 12; i >= 0; i--)
        {
            int j;

            j = pow(2, i);

            if (j == p)
            {
                count++;
                break;
            }
            else if (p > j)
            {
                p = p - j;
                count++;
            }
        }
        cout << count << endl;
        t--;
    }
    return 0;
}