#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        int a,b;
        cin>>a>>b;
        if(a>b)
        {
            cout<<"CAR"<<endl;
        }
        else if(a<b)
        {
            cout<<"BIKE"<<endl;
        }
        else
        {
            cout<<"SAME"<<endl;
        }
        
    }
    return 0;
}