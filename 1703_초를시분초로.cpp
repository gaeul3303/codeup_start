#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

int num100=0;
int num10=0;
int num=0;
if(n-3600>=0)
{
    while(n-3600>=0)
    {
        n=n-3600;
        num100+=1;

    }
    if(n-60>=0)
    {
        while(n-60>=0)
        {
            n=n-60;
            num10+=1;
        }
        num=n;
    }
    else
    {
        num=n;
    }
}
else
{
    if(n-60>=0)
    {
        while(n-60>=0)
        {
            n=n-60;
            num10+=1;
        }
        num=n;
    }
    else
    {
        num=n;
    }
}
cout<<num100<<' '<<num10<<' '<<num;
}