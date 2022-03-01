#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        int t2,count=0;
        cin>>t2;
        int a[t2],b[t2];
        for(int i =0; i<t2; i++)
        {
            cin>>a[i];
            cin>>b[i];
        }

        sort(a, a+t2);
        sort(b, b+t2);

        for(int i=0;i<t2-1;i++)
        {
            if (a[i]!=a[i+1])
            {
                count++;
            }
            if (b[i]!=b[i+1])
            {
                count++;
            }
        }
        cout<<count+2<<endl;
    }
    return 0;
}