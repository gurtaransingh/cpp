#include<iostream>
using namespace std;
 
int main(){
    int n,a,final=0;
    cin>>n;
    while(n>0)
    {
        int flag=0;
        for(int i=0;i<3;i++)
        {
            cin>>a;
            if(a==1)
            {
                flag = flag+1;
            }
        }
        if (flag==2||flag==3)
        {
            final=final+1;
        }
        n=n-1;
    }
    cout<<final;
    return 0;
}