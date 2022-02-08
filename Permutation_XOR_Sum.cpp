#include <bits/stdc++.h>
using namespace std;
#define int long long

int fun(int n)
{
    int c;
    if (n <= 0)
        return 0;
    int x = ceil(log2(n + 1));
    x = pow(2, x);
    x = x - 1;
    if (n == x)
        return n * (n - 1);
    return (fun(x - n - 1) + x * (2 * n - x + 1));
    c++;
}

void solve()
{
    int ans = 0;
    int n;
    cin >> n;
    cout << fun(n);
    ans--;
}

int32_t main()
{
    int n;
    cin >> n;
    while (n--)
    {
        solve();
        cout << endl;
    }
}