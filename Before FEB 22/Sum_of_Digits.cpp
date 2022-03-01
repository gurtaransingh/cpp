#include<iostream>
using namespace std;

int main(){
    int t1;
    cin>>t1;
    while (t1>0)
    {
        t1--;
        int a,count=0;
        cin>>a;
        
        while(a>0)
        {
            count=count + a%10;
            a=a/10;
        }
        // a=a/10;
        cout<<count<<endl;
    }
    
    return 0;
}