#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        int a,b,c[a],a2;
        cin>>a>>b;
        a2=a;
        while(a>0)
        {
            cin>>c[a];
            a--;
        }
        sort(c,c+a2);
        cout<<c[0];
        cout<<c[1];
        // cout<<c[2];
        // cout<<c[3];
        // cout<<c[4];
        
    }
    return 0;
}