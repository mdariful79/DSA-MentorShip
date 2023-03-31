#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        string s;
        cin>>n>>s;

        for(int i=0; i<n; i++)
        {
            for(int j=i+2; j<n; j++)
            {
                if(s[i]==s[j]&&s[i+1]==s[j+1])
                {
                    c=1;
                    break;
                }
            }
        }
        if(c)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

