#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
#define mod 998244353

ll cost_(int i, int j, vector<ll> &a)
{
    assert(j > i);
    ll d = j - i + 1;

    return d * a[i] - a[j];
}

int main()
{
    FIO;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<ll> a(n);
        for (ll &i : a)
        {
            cin >> i;
        }

        vector<ll> dp(n, 0);

        dp[0] = 0;
        dp[1] = cost_(0, 1, a);

        for (int i = 2; i < n; i++)
        {
            dp[i] = cost_(0, i, a);
            for (int k = 1; k < i; k++)
            {
                ll curcost = dp[k] + cost_(k, i, a);

                if (dp[i] > curcost)
                {
                    dp[i] = curcost;
                }

            }
            
        }

        cout << max(0LL, dp[n-1]) << endl;
    }
    return 0;
}