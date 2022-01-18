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
        cin >> n;
        int arr[n];
        int ans[32] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            for (int j = 0; j < 32; j++)
            {
                k = arr[i]>>j;
                if (k&1)
                {
                    ans[j]++;
                }
            }
        }
        ll out = 0;
        for (int i = 0; i < 32; i++)
        {
            if (ans[i]>1)
            {
                out += pow(2, i);
            }
        }

        cout << out << endl;
    }
    return 0;
}