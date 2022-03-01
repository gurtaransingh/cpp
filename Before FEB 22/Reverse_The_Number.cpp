#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        int n;
        cin>>n;
        while(n%10==0)
        {
            n=n/10;
        }
        while(n>0)
        {
            cout<<n%10;
            n=n/10;
        }
        cout<<endl;
    }
    return 0;
}