#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<long long> v(n+1);
    long long min = INT_MAX, j = 0;
    for(int i=1; i<=n; i++)
    {
        int x;
        cin >> x;
        v[i] = v[i-1] + x;
    }
    for(int i=k; i<=n; i++)
    {
        if(min > (v[i] - v[i-k]))
        {
            min = v[i] - v[i-k];
            j=i;
        }
    }
    cout << j-k+1 << endl;

    return 0;
}


