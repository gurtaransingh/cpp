#include<iostream>
#include<cstring>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    string w;
    while (n--)
    {
        cin>>w;
        int i = w.length();
        if(w.length()<=10)
        {
            cout<<w<<endl;
        }
        else if(w.length()>10)
        {
            cout<<w[0]<<w.length()-2<<w[i-1]<<endl;
        }
    }
    return 0;
}