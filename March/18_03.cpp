/*#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll ar[200005];
    ll n,num;
    cin>>n;
    ll x=n;
    for(int i=1; i<=x; i++)
    {
        cin>>num;
        ar[num] = 1;
        while(ar[n]==1)
        {
            cout<<n<<" ";
            n--;
        }
        cout<<endl;
    }
}
*/
#include<bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

typedef long long ll;

// Check if it is possible to place n chips with a maximum cost of max_cost
bool check(ll n, ll max_cost)
{
    // Calculate the size of the bounding square required to place n chips with a minimum distance of 2
    ll side = ceil(sqrt(n)) * 2 - 1;

    // Check if it is possible to place n chips within the bounding square with a maximum cost of max_cost
    ll chips_placed = 0;
    for (ll x = -side/2; x <= side/2; x++)
    {
        for (ll y = -side/2; y <= side/2; y++)
        {
            ll cost = abs(x) + abs(y);
            if (cost <= max_cost)
            {
                chips_placed += (side-abs(x))*(side-abs(y));
                if (chips_placed >= n)
                {
                    return true;
                }
            }
        }
    }
    return false;
}

// Find the minimum cost to place n chips with a minimum distance of 2
ll min_cost(ll n)
{
    // Binary search for the minimum cost
    ll left = 0, right = 2*n;
    while (left < right)
    {
        ll mid = (left + right) / 2;
        if (check(n, mid))
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }
    return left;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll cost = min_cost(n);
        cout << cost << endl;
    }
    return 0;
}
