#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,a,b[200010]= {0},ans,min=200010;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a;
        b[a]=i;
    }
    for(int i=0; i<=200000; i++)
        if(b[i]&&b[i]<min)
        {
            min=b[i];
            ans=i;
        }
    cout<<ans;
    return 0;
}
