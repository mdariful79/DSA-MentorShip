#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int y=0;
        for(int i=0; i<n; i++)
        {
            for(int j=i; j<n; j++)
            {
                if(s[i] == s[j])
                {
                    if((j-i)%2 != 0)
                    {
                        y=1;
                    }
                }
            }

        }
        if(y==1)
        {
            cout<<"NO"<<endl;
        }
        else if(y==0)
        {
            cout<<"YES"<<endl;
        }

    }
    return 0;
}
