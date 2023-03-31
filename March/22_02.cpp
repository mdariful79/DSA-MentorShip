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
        int x,k=0,uk=0,ans=0;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            if(x==1)
            {
                k++;
                uk++;
                ans = max(ans,uk);
            }
            else{
                if(k>0)
                {
                    uk = k/2 +1;
                }
            }

        }
        cout<<ans<<endl;

    }
}
