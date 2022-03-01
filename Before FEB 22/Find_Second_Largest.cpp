#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if ((a>b&&b>c)||(c>b&&b>a))
    cout<<b;
    else if ((b>c&&c>a)||(a>c&&c>b))
    cout<<c;
    else
    {
        cout<<a;
    }
    
    return 0;
}