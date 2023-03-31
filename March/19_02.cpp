#include <bits/stdc++.h>
using namespace std;

const int MAXN = 5005;

int t, n;
int c[MAXN];
bool dp[MAXN][MAXN];

int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> c[i];
        }

        // Initialize dp table
        memset(dp, false, sizeof(dp));
        dp[0][0] = true;

        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= 5000; j++) {
                dp[i][j] = dp[i-1][j]; // Don't add any element from a[i-1]
                if (j >= c[i-1]) {
                    dp[i][j] = dp[i][j] || dp[i-1][j-c[i-1]]; // Add a[i-1] to the subarray to generate j
                }
            }
        }

        // Check if all elements of c can be generated
        bool possible = true;
        for (int i = 0; i < n; i++) {
            if (!dp[n][c[i]]) {
                possible = false;
                break;
            }
        }

        if (possible) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
