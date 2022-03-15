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
        int n, k;
        cin >> n >> k;
        int a[k];
        for (int i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        // It's my code
    // Chetan_skc
    // iter's bitwise blend solution using variables given in problem statement.
        sort(a, a + k);
        vector<int> v;
        int ans = 0;
        for (int j = 0; j < k; j++)
        {
            for (int l = a[j]; l > ans; l--)
            {
                v.push_back(l);
            }
            ans = a[j];
        }
        // It's my code
    // Chetan_skc
    // iter's bitwise blend solution using variables given in problem statement.
        for (auto iter = v.begin(); iter != v.end(); iter++)
        {
            cout << *iter << " ";
        }
        cout << endl;
    }
    return 0;
}
