#include <iostream>
using namespace std;

int main()
{
    int row,col,i, j,k,l;
    cin >> row >> col;
    for(i=1;i<col;i++)
    {
        if (i==1||i==col)
        {
            for(j=1;j<row;j++)
            cout <<"*";
            cout<<endl;
        }
        // cout<<endl;
        else
        {
            for(k=1;k<2;k++)
            cout <<"*";
            for(l=1;l<4;l++)
            cout <<" ";
            for(l=1;l<2;l++)
            cout <<"*";
            cout<<endl;
        }
        // else if (i==5)
        // {
        //     for(j=1;j<6;j++)
        //     cout <<"*";
        //     cout<<endl;
        // }
    }
    //     cout <<"\n";
    // }
    // cout<<endl;

    return 0;
}