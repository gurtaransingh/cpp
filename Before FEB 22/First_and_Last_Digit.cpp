#include<iostream>
using namespace std;

int main(){
    int t1;
    cin>>t1;
    while (t1>0)
    {
        t1--;
        int a,b,count=0;
        cin>>a;
        // cout<<a%10<<endl;
        b=a%10;
        while(a>9)
        {
            count=count + a%10;
            a=a/10;
        }
        // a=a/10;
        cout<<a%10+b<<endl;
    }
    
    return 0;
}