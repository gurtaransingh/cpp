#include<iostream>
using namespace std;

int main(){
    int t1;
    cin>>t1;
    while (t1>0)
    {
        t1--;
        int a,b,count=0;
        cin>>a>>b;
        cout<<a%b<<endl;
    }
    
    return 0;
}