#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,n,s,c=0;
        cin>>a>>b>>n>>s;
        c = min(s/n,a)*n+b;
        if(s <= c)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }


    }


}
