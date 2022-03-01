#include<iostream>
using namespace std;

int main(){
    int a,b,n=1;
    cin>>a;
    while(a>0)
    {
        if (n%2==1)
        {
            for(b=0;b<5;b++)
            {
                cout<<n<<" ";
                n++;
            }
            cout<<endl;
        }
        if (n%2==0)
        {
            for(b=5;b>0;b--)
            {
                cout<<n+b-1<<" ";
            }
            cout<<endl;
            n=n+5;
        }
        a--;
        a--;
        }
    return 0;
}
