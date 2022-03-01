#include<iostream>
using namespace std;

int main(){
    int a,i,j=0;
    cin>>a;
    for(i=2;i<=a/2;i++){
        if (a%i==0){
            cout<<"not prime\n";
            break;
        }
        else if (i==a/2||a==2||a==3)
            cout<<"prime";
        // else
        // continue;
    }
    return 0;
}