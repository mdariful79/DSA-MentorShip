#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    ll r,l;
    cin>>l>>r;

    if((r-l)%2 !=1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        for(ll i=l; i<r+1; i +=2)
        {
            {
                cout<<i<<" "<<i+1<<endl;
            }
        }
    }
}
