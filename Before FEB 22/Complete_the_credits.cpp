#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        int a;
        cin>>a;
        if(a>65)
        {
            cout<<"Overload"<<endl;
        }
        else if(a<35)
        {
            cout<<"Underload"<<endl;
        }
        else
        {
            cout<<"Normal"<<endl;
        }
        
    }
    return 0;
}