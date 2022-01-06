#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int ary[50][50] {};
    int number=1;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            ary[i][j]=number++;
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<ary[i][j]<<' ';
            
        }
        cout<<endl;
    }

}
