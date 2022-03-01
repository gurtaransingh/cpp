#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        int a,b;
        cin>>a>>b;
        if(a/2>=b)
        {
            cout<<b<<endl;
        }
        else
        {
            cout<<a/2<<endl;
        }
    }
    return 0;
}