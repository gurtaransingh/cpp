#include<iostream>
using namespace std;

int main(){
    int cases;
    cin>>cases;
    while(cases>0)
    {
        cases--;
        int n,l,b,i,recarea,squareside;
        cin>>n>>l>>b;
        recarea=n*l*b;
        if(l>b)
        {
            for(i=1;i<n;i++)
            {
                squareside=n/i * l;
                if(squareside*squareside<recarea)
                break;
            }
            cout<<n/(i-1)*l;
        }
        else if(b>l)
        {
            for(i=1;i<n;i++)
            {
                squareside=n/i * b;
                if(squareside*squareside<recarea)
                break;
            }
            cout<<n/(i-1)*b;
        }
    }
    return 0;
}