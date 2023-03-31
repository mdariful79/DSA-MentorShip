#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<2<<endl;
        cout<<n-1<<" "<<n<<endl;
        while(n>2)
        {
            cout<<n-2<<" "<<n<<endl;
            n--;
        }

    }
    return 0;
}

