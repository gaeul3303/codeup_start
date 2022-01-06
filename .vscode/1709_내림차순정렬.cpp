#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[1000];
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int temp;
    for (int i=0;i<n; i++)
    {

        for( int i=0; i<n; i++)
        {
            if (a[i]<a[i+1])
            {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
            }
            else 
            {
            a[i]=a[i];
            }
        }
        
    }

    for (int i=0; i<n; i++)
    {
        cout<<a[i]<<' ';
    }

}