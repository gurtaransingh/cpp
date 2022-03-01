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
        if(a==1)
        {
            cout<<"6"<<endl;
        }
        else if(a==2)
        {
            cout<<"5"<<endl;
        }
        else if(a==3)
        {
            cout<<"4"<<endl;
        }
        else if(a==4)
        {
            cout<<"3"<<endl;
        }
        else if(a==5)
        {
            cout<<"2"<<endl;
        }
        else
        {
            cout<<"1"<<endl;
        }
        
    }
    return 0;
}