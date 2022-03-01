// #include<iostream>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t>0)
//     {
//         t--;
//         int n,count=0,m;
//         cin>>n;
//         m=n;
//         while(n>1)
//         {
//             if(n>=10)
//             {
//                 n=(n/10)+(n%10);
//                 count++;
//             }
            
//             else
//             {
//                 n=(n/10);
//                 count++;
//             }
            
            
//         }
//         cout<<(m/4)-count+1<<endl;
//     }
//     return 0;
// }












#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        int n,count=0,m;
        cin>>n;
        m=n;
        while(n>1)
        {
            if(n>=10)
            {
                n=(n/10)+(n%10);
                count++;
            }
            
            else
            {
                n=(n/10);
                count++;
            }
            
            
        }
        cout<<(m/4)-count+1<<endl;
    }
    return 0;
}