#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t>0)
    {
        t--;
        int a,b,n[a];
        cin>>a>>b;

        for(int i=0; i<a;i++)
        {
            n[i]=0;
        }
        
        for(int i=0; i<a;i++)
        {
            n[i]=n[i]+1;
        }

        for(int i=0;i<a;i++)
        {
            cout<<n[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}




































// #include<iostream>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while (t>0)
//     {
//         t--;
//         int a,b,x=0;
//         cin>>a>>b;
//         int cloneb=b;
//         int c[a];
//         while(b>cloneb/a)
//         {
//             for(int i=0; i<a; i++)
//             {
//                 c[i]=1+x;
//             }
//              x++;
//              b=b-cloneb/a;
//         }
//         cout<<c[1]<<" "<<c[2]<<" "<<c[3]<<" "<<c[4]<<" "<<c[5]<<endl;
        
//     }
//     return 0;
// }
