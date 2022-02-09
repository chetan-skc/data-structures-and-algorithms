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
        ll x, m;
        cin >> x >> m;

        ll a = 2;
        ll ans = 0;
        while (a <= x)
        {
            a <<= 1;
            ans++;
        }
        // It's my code
        // Chetan_skc
        // it's bitwise blend solution using variables given in problem statement.
        a /= 2;
        ll one = ans + 1;
        if (one > m)
        {
            cout << 0 << "\n";
            continue;
        }
        // It's my code
        // Chetan_skc
        // it's bitwise blend solution using variables given in problem statement.
        if (a == x)
        {
            cout << 1 + (m - one) << "\n";
        }
        else
        {
            cout << (m - one) << "\n";
        }
        // It's my code
        // Chetan_skc
        // it's bitwise blend solution using variables given in problem statement.
    }
    return 0;
}