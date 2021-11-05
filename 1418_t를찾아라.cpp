#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    for (int i=0; i<100; i++)
    {
        if (s[i]=='t')
        {
            cout<<i+1<<' ';
        }
    }
}