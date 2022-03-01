#include <iostream>
using namespace std;

int main()
{
    int x = 0, n;
    string a;
    cin >> n;
    while (n > 0)
    {
        cin >> a;
        if (a == "X++")
        {
            x++;
        }
        else if (a == "++X")
        {
            ++x;
        }
        else if (a == "--X")
        {
            --x;
        }
        else if (a == "X--")
        {
            x--;
        }
        n--;
    }
    cout << x;

    return 0;
}