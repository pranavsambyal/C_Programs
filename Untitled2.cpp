#include<iostream>
int main()
{using namespace std;
    int arry[3][4];
    cout<<"enter\n";
    for(int j=0; j<=3; j++)
    {
        for(int i=0; i<=2; i++)
        {
            cout<<"Input["<< i<<"]["<<j<<"]";
            cin>>arry[i][j];
        }
        cout<<"\n";
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<arry[i][j]<<"\t";
        }
        cout<<"\n";
    }




}