#include<iostream>
using namespace std;

int main(){
    int t1,t2,count=0;
    cin>>t1>>t2;
    while (t1>0)
    {
        t1--;
        int a;
        cin>>a;
        if(a%t2==0)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}