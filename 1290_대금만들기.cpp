#include <iostream>
using namespace std;

int main()
{
    int n;
    int s=0;
    cin>> n;
    for (int i= n-1; i>0; --i)
    {
        if (n%i ==0)
        {
            s+=1;

        }
    }
    cout<< s;

}