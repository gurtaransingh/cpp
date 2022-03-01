#include<iostream>
using namespace std;

int main(){
    int num,i,j,k=0;
    cin>>num;
    for (i=1;i<=num;i++)
    {
        for (j=1;j<=i;j++)
        {
            k=k+1;
            cout<<k<<" ";
        }
        cout<<endl;
    }
    return 0;
}