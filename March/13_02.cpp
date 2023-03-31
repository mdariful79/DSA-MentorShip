#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c=0;
    string s;
    cin>>s;
    while(s.size() != 1)
    {
        int x=0;
        for(int i=0; i<s.size(); i++)
        {
             x += s[i]-'0';
        }

        s = to_string(x);
        c++;
    }
    cout<<c;

    return 0;
}
