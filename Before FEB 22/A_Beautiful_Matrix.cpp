#include<iostream>
#include<cmath>
using namespace std;
 
int main()
{
    int a, b, c, x, y;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> a;
            if (a == 1)
            {
                b = i;
                c = j;
            }
        }
    }
    x=b-3;
    y=c-3;
 
    cout<<abs(y)+abs(x);
    
       return 0;
}