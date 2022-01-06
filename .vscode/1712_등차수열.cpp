#include <iostream>
using namespace std;

int main()
{
    int a, a2,k;
    cin>>a>>a2>>k;

    int d=a2-a;
    
    for ( int i=0; i<k; i++)
    {
        
        if( a+d*i <=k)
        {
            cout<<a+d*i<<' ';
        }
        else break;
    }
}