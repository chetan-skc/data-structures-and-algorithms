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
        string s;
        cin >> n >> k;
        cin >> s;
        int i;
        int count = 0;
        for (i = 0; i < n; i++)
        {
            int ele = s[i] - '0';
            k = k - (k + ele) % 10;
            if (k >= 0)
                count++;
            else
                break;
        }
        cout << count << endl;
        n++;
        k--;
    }
    return 0;
}
