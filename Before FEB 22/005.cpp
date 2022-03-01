#include<iostream>
using namespace std;

int main(){
    int n,i,j,x,k,m;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        x=n-i+1;
        for (j=1;j<=x-1;j++)
        cout<<"  ";
        for (k=i;k>=1;k--)
        cout<<k<<" ";
        for (m=1;m<=i-1;m++)
        cout<<m+1<<" ";
        cout<<endl;
    }
    return 0;
}