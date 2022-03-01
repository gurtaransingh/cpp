// #include<iostream>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t>0)
//     {
//         t--;
//         int p,i,n;
//         string a[n];
//         cin>>p;
//         // n=p;
//         // while(n>0)
//         // {
//         //     for(int i=1;i<n;i++)
//         //     a[i]=n%10;

//         //     cout<<n<<endl;
//         //     n--;
//         // }
//     }
//     return 0;
// }





#include<iostream>
#include <math.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        int n,y,x,count=0,g,alpha=0;
        string a;
        cin>>n;
        x=n;
        y=x;
        while(n!=0)
        {
            n=n/10;
            count++;
        }
        // cout<<count<<endl;
        for(int i=1;i<=count/2+1;i++)
        {
            // if (n%10==n%(10^(count-i))
            // x/g=x%10
            int g=pow (10,count-i);
            // int h=pow (10,count-i);
            // cout<<x/g%10<<endl;
            
            // cout<<y%10;
            
            if (x/g%10!=y%10)
            {
                cout<<"loses"<<endl;
                alpha++;
                break;
            }
            // else
            // {
            //     g=1;
            //     // break;
            // }
            y=y/10;
            // if (g==0)
            // cout<<"wins"<<endl;
        }
        if (alpha==0)
            cout<<"wins"<<endl;
    }
    return 0;
}







// // C program to illustrate
// // power function
// #include <math.h>
// #include <stdio.h>

// int main()
// {
// 	double x = 6.1, y = 4.8;

// 	// Storing the answer in result.
// 	double result = pow(x, y);
// 	printf("%.2lf", result);

// 	return 0;
// }











