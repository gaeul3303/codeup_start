#include<iostream>
using namespace std;

int main()
{
    int n1;
    int n2;
    int n3;

    int w1;
    int w2;
    int w3;

    cin>>n1 >> w1 ;
    cin>>n2 >> w2;
    cin>>n3 >> w3;

    int area1= n1* w1;
    int area2= n2* w2;
    int area3= n3* w3;

    if (area1> area2)
    {
        if(area1> area3)
        {
            cout<< area1;
        }
        else
        {
            cout<< area3;
        }
    }
    else
    {
        if(area2> area3)
        {
            cout<< area2;
        }
        else
        {
            cout<< area3;
        }
    }
}