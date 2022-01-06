#include <iostream>
using namespace std;

int main() 
{
    int a1, b1;
    cin>>a1>>b1;

    int a2, b2;
    cin>>a2>>b2;

    int x,y;
    cin>>x>>y;

    if (a1<a2)
    {
        if (x<a1 || x>a2)
        {
            cout<<"비충돌"<<endl;
        }
        else
        {
            if (b1<b2)
            {
                if (y<b1 || y> b2)
                {
                    cout<<"비충돌"<<endl;
                }
                else
                {
                    cout<<"충돌"<<endl;
                }
            }
            else
            {
                if (y<b2 || y> b1)
                {
                    cout<<"비충돌"<<endl;
                }
                else
                {
                    cout<<"충돌"<<endl;
                }
            }
        }
    }
    else
    {
        if (x<a2 || x>a1)
        {
            cout<<"비충돌"<<endl;
        }
        else
        {
            if (b1<b2)
            {
                if (y<b1 || y> b2)
                {
                    cout<<"비충돌"<<endl;
                }
                else
                {
                    cout<<"충돌"<<endl;
                }
            }
            else
            {
                if (y<b2 || y> b1)
                {
                    cout<<"비충돌"<<endl;
                }
                else
                {
                    cout<<"충돌"<<endl;
                }
            }
        }
    }
}