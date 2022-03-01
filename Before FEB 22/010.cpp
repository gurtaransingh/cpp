#include<iostream>
using namespace std;

int main(){
    int n,m,a,x,flag,count=0; 
    cin>>n>>a;
    m=n;
    while (n>0)
    {
        cin>>x;
        if(a>=x)
        {
            count=count+1;
        }
        
        n=n-1;
        if(x==0)
        {
            flag=m;
        }
    }
    if(flag==m)
    cout<<"0";
    else if(m-count==0)
    cout<<m;
    else
    cout<<m-count;
    return 0;
}