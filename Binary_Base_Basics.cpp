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
        string s;
        cin >> s;
        // using binary search method
        int start = 0, end = n - 1, mid = 0;
        while (start <= end)
        {
            if (s[start] != s[end])
            {
                mid++;
            }
            start++;
            end--;
        }
        // applying binary search method
        //checking final conditions
        int c = k - mid;
        if (c >= 0 && c % 2 == 0 || c >= 0 && n % 2 == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}