#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string s;
    cin >>  s;
    ll c=0;
    for(int i=0; i<s.size(); i++)
    {

        if(s[i]=='1')
        {
            for( ; i<s.size(); i++)
                if(s[i] == '0')
                {
                    c++;
                }
        }

    }
    if(c>=6)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
}
