#include <iostream>
using namespace std;

int main()
{
    int n;
    int s=0;

    cin >> n;

    for (int i=0; i<=n; ++i)
    {
        if (i %10 ==1)
        {
            s=s+1;
        }
        else 
        {
            s=s;
        }
    }

    cout<<s<<endl;

}