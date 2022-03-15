#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
// It's my code
// Chetan_skc
// it's bitwise blend solution using variables given in problem statement.
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
        vector<bool> v(31);
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            v[x] = true;
        }
        for(int i=1; i<=4; i++){
            v[7*i] = true;
            v[7*i-1] = true;
        }
        int ans = 0;
        for(int i=1; i<31; i++){
            if(v[i]) ans++;
        }
        cout << ans << endl;
        // It's my code
        // Chetan_skc
        // it's bitwise blend solution using variables given in problem statement.
    }
    return 0;
}
