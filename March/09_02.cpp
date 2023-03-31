#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,u,j=0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        u=a[0]%2;
        for(int i=0; i<n; i+=2)
        {
            if(a[i]%2!=u)
            {
                j++;
            }
        }
        if(j==0)
        {
            u=a[1]%2;
            for(int i=1; i<n; i+=2)
            {
                if(a[i]%2!=u)
                {
                    j++;
                }
            }
            if(j==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

}
