#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
// It's my code
// Chetan_skc
// it's bitwise blend solution using variables given in problem statement.
int main()
{
    FIO;
    int t;
    cin >> t;
    // It's my code
    // Chetan_skc
    // it's bitwise blend solution using variables given in problem statement.
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v;
        ll s = 0;
        // It's my code
        // Chetan_skc
        // it's bitwise blend solution using variables given in problem statement.
        for (ll i = 0; i < n; i++)
        {
            ll y;
            cin >> y;
            v.push_back(y);
            s += y;
        }
        // It's my code
        // Chetan_skc
        // it's bitwise blend solution using variables given in problem statement.
        ll x = s;
        ll max = 0;
        vector<pair<ll, ll>> ans;

        for (ll i = 0; i < n; i++)
        {
            max += v[i];
            ans.push_back({max, x - max});
        }
        // It's my code
        // Chetan_skc
        // it's bitwise blend solution using variables given in problem statement.
        sort(ans.begin(), ans.end(), [&](pair<ll, ll> &a, pair<ll, ll> &b)
             { return abs(a.first - a.second) < abs(b.first - b.second); });
        if (ans[0].first > ans[0].second)
        {
            cout << ans[0].first << endl;
        }
        // It's my code
        // Chetan_skc
        // it's bitwise blend solution using variables given in problem statement.
        else
        {
            cout << ans[0].second << endl;
        }
        // It's my code
        // Chetan_skc
        // it's bitwise blend solution using variables given in problem statement.
    }
    return 0;
}
