#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        int a,b,c;
        {
            cin>>a>>b;
        }
        int d=a;
        
        while(b>a)
        {
                b=b-a-1;
        }
        if(a>=b)
        {
            cout<<b<<endl;
        }
    }
    return 0;
}