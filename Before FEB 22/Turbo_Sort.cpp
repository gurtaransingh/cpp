// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main(){
//     int t,t2;
//     cin>>t;
//     t2=t;
//     int a[t];
//     while(t>0)
//     {
//         cin>>a[t];
//         // cout<<a[t]<<" ";
//         t--;
//     }
//     cout<<endl;
//     sort(a,a+t2);

//     for(int i=1; i<=t2;i++)
//     {
//         cout<<a[i]<<endl;
//     }
//     // // cout<<a[1];
//     // while(t2>0)
//     // {
//     //     cout<<a[t2]<<endl;
//     //     t2--;
//     // }
//     return 0;
// }





















#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t,t2;
    cin>>t;
    t2=t;
    int a[t];
    while(t>0)
    {
        cin>>a[t];
        t--;
    }
    cout<<endl;
    sort(a,a+t2);
    for(int i=1; i<=t2; i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}