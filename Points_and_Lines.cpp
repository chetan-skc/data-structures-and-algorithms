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
        int a[n], b[n];
        for(int i=0; i<n; i++){
            cin >> a[i] >> b[i];
        }
        sort(a, a+n);
        sort(b, b+n);
        int ans1 = 0, ans2 = 0;
        for(int i=0; i<n; i++){
            while(i<n-1 && a[i]==a[i+1])
            i++;
            ans1++;
        }
        for(int i=0; i<n; i++){
            while(i<n-1 && b[i]==b[i+1])
            i++;
            ans2++;
        }
        cout << ans1+ans2 << endl;
    }
    return 0;
}