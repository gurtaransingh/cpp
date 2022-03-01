#include<iostream>
using namespace std;

int main(){
    int t,x;
    cin>>t;
    x=t;
    int n[t];
    while(t>0){
        t--;
        cin>>n[t];
    }
    sort(n,n+x);
    int f[x];
    for(int i=x-1;i>=0;i--){
        f[i]=n[i]*(x-i);
    }
    cout<< *max_element(f,f+x);
    // cout<<f[0]<<endl;
    // cout<<f[1]<<endl;
    // cout<<f[2]<<endl;
    // cout<<f[3]<<endl;
    // cout<<f[4]<<endl;
    return 0;
}
