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
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (n == 1 && k == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            if (k < 2 || k > n)
            {
                cout << -1 << endl;
            }
            else
            {
                int c = 0;
                for (int i = 0; i < k - 1; i++)
                {
                    cout << (i + 1) << " ";
                    c = i;
                }
                for (int i = 0; i < n - c - 1; i++)
                {
                    cout << (n - i) << " ";
                }
                cout << endl;
            }
        }
    }
        return 0;
    }