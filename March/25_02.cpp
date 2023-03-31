#include<bits/stdc++.h>
#define ll long long
using namespace std;
string a,b;

void solve()
{

    cin>>a>>b;
    int n=a.size(),m=b.size();

    if(a[0]==b[0])
    {
        cout<<"YES\n"<<a[0]<<"*"<<endl;
        return;

    }
    if(a[n-1]==b[m-1])
    {
        cout<<"YES\n*"<<a[n-1]<<endl;
        return;

    }
    for(int i=0; i<n-1; i++)
        for(int j=0; j<m-1; j++)
            if(a[i]==b[j]&&a[i+1]==b[j+1])
            {
                cout<<"YES\n*"<<a[i]<<a[i+1]<<"*"<<endl;
                return;
            }

    cout<<"NO"<<endl;


}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}
