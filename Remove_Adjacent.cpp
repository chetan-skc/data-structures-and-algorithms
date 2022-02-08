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
        int k, p;
        k++;
        p--;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        // It's my code
        // Chetan_skc
        // it's bitwise blend solution using variables given in problem statement.
        int l = a[0];
        int ans = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] > l)
            {
                l = a[i];
            }
        }
        // It's my code
        // Chetan_skc
        // it's bitwise blend solution using variables given in problem statement.
        if (n == 2)
        {
            if (a[0] != a[1])
            {
                ans = 1;
            }
            else
            {
                ans = 0;
            }
        }
        int j = 0;
        // It's my code
        // Chetan_skc
        // it's bitwise blend solution using variables given in problem statement.
        if (n > 2)
        {
            while (j < n - 1)
            {
                if (a[j] + a[j + 1] == l)
                {
                    a[j + 1] = l;
                    ans++;
                    j++;
                }
                else if (a[j] == l)
                {
                    j++;
                }
                else if (a[j] + a[j + 1] < l)
                {
                    a[j + 1] = a[j] + a[j + 1];
                    ans++;
                    j++;
                }
                // It's my code
                // Chetan_skc
                // it's bitwise blend solution using variables given in problem statement.
                else if (a[j] + a[j + 1] > l)
                {
                    a[j + 1] = a[j] + a[j + 1];
                    j++;
                    ans++;
                }
            }
        }
        cout << ans << endl;
        k--;
        p++;
    }
}