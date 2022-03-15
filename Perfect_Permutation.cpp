#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
// It's my code
// Chetan_skc
// iter's bitwise blend solution using variables given in problem statement.
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for (int i = 1; i <= n; i++)
        v.push_back(i);
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    // It's my code
    // Chetan_skc
    // iter's bitwise blend solution using variables given in problem statement.
    if (k == n - 1)
    {
        swap(v[0], v[1]);
        for (auto it : v)
        {
            cout << it << " ";
        }
        cout << endl;
        return;
    }
    // It's my code
    // Chetan_skc
    // iter's bitwise blend solution using variables given in problem statement.
    int sum = 0;
    k = n - k;
    while (k--)
    {
        swap(v[sum], v[sum + 1]);
        sum++;
    }
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
}
int main()
{
    FIO;
    int t;
    cin >> t;
    // It's my code
    // Chetan_skc
    // iter's bitwise blend solution using variables given in problem statement.
    while (t--)
    {
        solve();
        // It's my code
        // Chetan_skc
        // iter's bitwise blend solution using variables given in problem statement.
    }
    return 0;
}
