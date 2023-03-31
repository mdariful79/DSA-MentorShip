#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t,n,k,a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        k=n;
        while(k>0)
        {
            a=k%10;
            k=k/10;
            if(a>0 && n%a!=0)
            {
                n++;
                ytyy
                k=n;
            }
        }
        cout<<n<<'\n';
    }
}

