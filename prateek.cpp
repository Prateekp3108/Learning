#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;int j;
    cin>>i;
    cin>>j;
    if(i>j)
    {
        for(int a=j;a<=i;a++)
        {
            cout<<a<<" ";
        }
    }
    else
    {
        for(int a =i;a<=j;a++)
        {
            cout<<a<<" ";
        }
    }
    return 0;
}