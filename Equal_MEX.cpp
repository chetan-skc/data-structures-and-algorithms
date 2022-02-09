#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

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
        int n;
        cin >> n;
        int a[2 * n];
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> a[i];
        }
        // It's my code
        // Chetan_skc
        // it's bitwise blend solution using variables given in problem statement.
        sort(a, a + 2 * n);
        int b[n + 1];
        for (int i = 0; i < n + 1; i++)
        {
            b[i] = 0;
        }
        for (int i = 0; i < 2 * n; i++)
        {
            b[a[i]]++;
        }
        // It's my code
        // Chetan_skc
        // it's bitwise blend solution using variables given in problem statement.
        int ans = 1;
        for (int i = 0; i < n + 1; i++)
        {
            if (b[i] != 0 && b[i] == 1)
            {
                ans = 0;
                break;
            }
            if (b[i] == 0)
            {
                break;
            }
        }
        // It's my code
        // Chetan_skc
        // it's bitwise blend solution using variables given in problem statement.
        if (ans == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}