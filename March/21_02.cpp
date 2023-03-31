#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
    int n,k;cin>>n>>k;
    string s;cin>>s;
    map<char,int>m;
    for(int i=0;i<n;i++)
    {
        m[s[i]]++;
    }int ans=0,ad=0;
    for(char i='a';i<='z';i++)
    {
        ans+=min(m[i],m[i-32]);
        ad+=(abs(m[i]-m[i-32]))/2;
    }
    ans+=min(k,ad);
    cout<<ans<<'\n';
}
}
