#include <iostream>
using namespace std;

int main()
{
    int a, b, c, e, sum=0;
    cin >> a;
    b=a;
    while (a>0)
    {
        c = a % 10;
        e=c*c*c;
        sum = sum +e;
        a=a/10;
    }
    if(sum==b)
    cout<<"yes";
    else
    {
        cout<<"no";
    }
    
    // a=a/10;
    return 0;
}