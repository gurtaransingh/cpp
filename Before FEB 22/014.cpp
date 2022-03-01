// #include<iostream>
// #include<cmath>
// using namespace std;
// // int a;

// double sahib(int g)
// {
//     float b;
//     b=pow(g,1/3);
//     return b;
// }

// int main()
// {
//     float a,c;
//     cin>>a;
//     c=sahib(a);
//     cout<<c;
    
//     return 0;
// }












#include<iostream>
#include<cmath>
using namespace std;
// int a;

double sahib(float g)
{
    // cout<<g<<endl;
    // float c;
    cout<<pow(g,1.0/1.0*1/3)<<endl;
    return pow(g,1.0/3.0);
}

int main()
{
    int a;
    float res;
    cin>>a;
    res=sahib(a);
    cout<<res<<endl;
    
    return 0;
}



































