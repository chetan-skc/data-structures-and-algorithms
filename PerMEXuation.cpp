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
    int n;
    int h = 1;
    cin >> n;
    string s;
    cin >> s;
    // It's my code
    // Chetan_skc
    // iter's bitwise blend solution using variables given in problem statement.
    if (s[0] == '0' || s[1] == '0' || s[n] == '0')
    {
        cout << "No" << endl;
        return;
    }
    vector<int> v;
    v.push_back(0);
    
    // It's my code
    // Chetan_skc
    // iter's bitwise blend solution using variables given in problem statement.
    for (int i = 2; i < s.size() - 1; i++)
    {
        if (s[i] == '0')
            v.push_back(i);
        else
            v.push_back(h);
            h = i;
    }
    // It's my code
    // Chetan_skc
    // iter's bitwise blend solution using variables given in problem statement.
    v.push_back(h);
    cout << "Yes" << endl;
    for (auto it : v)
        cout << it << " ";
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
        return 0;
    }
}
