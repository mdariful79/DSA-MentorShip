#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int k;
    cin>>k;
    while(k--)
    {
        ll n,x,t;
        cin>>n>>x>>t;

        ll c = min(n,t/x);

        cout<<(c*(c-1)/2)+c*(n-c)<<endl;

    }
}
