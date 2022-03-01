#include<iostream>
using namespace std;

int main(){
    int n,a,b,c,d,e,f;
    cin>>n;
    for(a=1;a<=n;a++)
    {
    for(b=n-a;b>=1;b--)
    cout<<" ";
    for(c=1;c<=a;c++)
    cout<<"* ";
    cout<<endl;
    }
    for(d=1;d<=n-1;d++)
    {
    for(e=1;e<d+1;e++)
    cout<<" ";
    for(f=n-1;f>=d;f--)
    cout<<"* ";
    cout<<endl;
    }
    return 0;
}