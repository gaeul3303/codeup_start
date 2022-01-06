#include<iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int sum=0;
    int a=0;

    for (int i=0;i<10;i++)
    {
        
        a=num%10;
        sum=sum+a;
        num=num/10;

        
    }
    

    
    
    if (sum%7==4)
    {
        cout<<"suspect";
    }
    if (sum%7!=4)
    {
        cout<<"citizen";
    }
}