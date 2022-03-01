#include<iostream>
using namespace std;

int main(){
    int a,n;
    cin>>a;
    while(a>0)
    {
        cin>>n;
        cout<<n/2+1<<endl;
        a=a-1;
    }
    return 0;
}