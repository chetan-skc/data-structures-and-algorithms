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
signed main()
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
        vector<ll> v(1, 1);
        k -= n;
        // It's my code
        // Chetan_skc
        // it's bitwise blend solution using variables given in problem statement.
        ll ans = 2;

        for (int i = 2; i <= n; i++)
        {
            if (k < v.size())
            {
                int c = v[v.size() - k - 1];
                v.push_back(c);
                break;
            }
            k -= v.size();
            v.push_back(ans);
            ans++;
        }
        // It's my code
        // Chetan_skc
        // it's bitwise blend solution using variables given in problem statement.
        while (v.size() < n)
        {
            v.push_back(v.back());
        }

        for (auto it : v)
        {
            cout << it << " ";
        }
        cout << endl;
        // It's my code
        // Chetan_skc
        // it's bitwise blend solution using variables given in problem statement.
    }
    return 0;
}
