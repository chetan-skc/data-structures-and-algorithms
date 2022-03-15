#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)           
#define sub(xx) xx.begin(), xx.end()
// It's my code
// Chetan_skc
// it's bitwise blend solution using variables given in problem statement.
void solve()
{
    FIO;
    int n, count = 0;
    cin >> n;
    vector<int> v;
    // It's my code
// Chetan_skc
// it's bitwise blend solution using variables given in problem statement.
    for (int i = 0; i < n; i++) 
    {                           
        int x;                  
        cin >> x;               
        v.push_back(x);         
    }
    // It's my code
// Chetan_skc
// it's bitwise blend solution using variables given in problem statement.
    string s;
    cin >> s;
    if (is_sorted(sub(v)))
    {
        cout << 0 << endl;
        return;
    }
    // It's my code
// Chetan_skc
// it's bitwise blend solution using variables given in problem statement.
    for (auto it : s)
        if (it == 'N')
            count++;
    if (count == n || count == 0)
    {
        cout << -1 << endl;
        return;
    }
    // It's my code
// Chetan_skc
// it's bitwise blend solution using variables given in problem statement.
    vector<int> b = v;
    sort(sub(v));
    int low = INT_MAX, high = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != b[i])
        {
            low = min(i, low);
            high = max(high, i);
        }
    }
// It's my code
// Chetan_skc
// it's bitwise blend solution using variables given in problem statement.
    bool fre1 = false, fre2 = false;
    for (int i = 0; i < low; i++)
        if (s[i] != s[high])
            fre1 = true;
            // It's my code
// Chetan_skc
// it's bitwise blend solution using variables given in problem statement.
    for (int i = high; i < n; i++)
        if (s[i] != s[low])
            fre2 = true;
    if (s[low] != s[high] ? fre1 : fre2)
        cout << 1;
// It's my code
// Chetan_skc
// it's bitwise blend solution using variables given in problem statement.
    else
        cout << 2;
    cout << endl;
}
// It's my code
// Chetan_skc
// it's bitwise blend solution using variables given in problem statement.
int main()
{
    int t;
    cin >> t;
// It's my code
// Chetan_skc
// it's bitwise blend solution using variables given in problem statement.
    while (t--)
        solve();
    return 0;
}