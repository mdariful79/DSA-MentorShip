#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin>>s;
    int n= s.size();
    int ans = n;
    int temp=0;
    for(int i=0; i<n; i++)
    {
        if(s[i] == '(')
        {
            temp++;
        }
        else{
            temp--;
        }
        if(temp<0)
        {
            ans--;
            temp++;
        }
    }
    cout<<ans-temp;

}
