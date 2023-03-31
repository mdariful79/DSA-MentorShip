#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n;
    n =stoi(s);
    int c=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='4' || s[i]=='7')
        {
            c++;
        }
    }

    if(c==s.size())
    {
        cout<<"YES";
    }
    else if(n%4==0 || n%7==0 || n%47==0 || n%74==0 || n%444==0 || n%474==0 || n%477==0 || n%777==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
