#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=1,i;
        cin>>n;
        ll a[n];
        for (int i=1; i<=n; i++) cin >> a[i];
        ll l=1,r=n;
        while (l<n && a[l]<=a[l+1]) l++;
        while (r>1 && a[r]<=a[r-1]) r--;
        if (r<=l) cout <<"YES\n";
        else cout << "NO\n";
    }
}
