#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string a,b;
    cin>>a>>b;
    transform(a.begin(), a.end(), a.begin(), ::toupper);
    transform(b.begin(), b.end(), b.begin(), ::toupper);
    if(a>b)
    {
        cout<<"1";
    }
    else if(a<b)
    {
        cout<<"-1";
    }
    else if(a==b)
    {
        cout<<"0";
    }
    return 0;
}