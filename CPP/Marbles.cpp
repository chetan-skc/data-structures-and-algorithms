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
    while (t--){
        int n;
        string a;
        string b;
        cin >> a;
        cin >> b;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i] || a[i] == b[i] == '?')
            {
                ans++;
                continue;
            }
            else
            {
                ans = 0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}