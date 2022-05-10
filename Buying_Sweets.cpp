#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
bool comp(pair<ll, ll> &p1, pair<ll, ll> &p2)
{
    return (((double)p1.second / (double)p1.first) > ((double)p2.second / (double)p2.first));
}
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
        ll n, k;
        cin >> n >> k;
        vector<pair<ll, ll>> v(n);
        for (ll i = 0; i < n; i++)
            cin >> v[i].first;
        for (ll i = 0; i < n; i++)
            cin >> v[i].second;
        sort(v.begin(), v.end(), comp);
        ll ans = 0, i = 0;
        // It's my code
        // Chetan_skc
        // it's bitwise blend solution using variables given in problem statement.
        while (i < v.size() and k > 0)
        {
            if (k >= v[i].first)
            {
                ll c = ((double)(k - v[i].second) / (double)(v[i].first - v[i].second));
                ans += c;
                k -= c * (v[i].first - v[i].second);
            }
            i++;
        }
        // It's my code
        // Chetan_skc
        // it's bitwise blend solution using variables given in problem statement.
        cout << ans << endl;
    }
    return 0;
}