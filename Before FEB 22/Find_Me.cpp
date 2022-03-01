#include<iostream>
using namespace std;

int main(){
    int a,b,d=-1;
    cin>>a>>b;
    int c[a];
    for(int i=0;i<a;i++)
    {
        cin>>c[i];
        if (c[i]==b)
        {
            d=1;
        }
    }
    cout<<d;
    return 0;
}