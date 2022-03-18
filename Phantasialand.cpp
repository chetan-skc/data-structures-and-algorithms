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
    ll n;
    cin >> n;
    int a[n];
    ll sum = 0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        sum += a[i];
    }
    ll ans = sum/2;
    if((sum%2)==1){
        ans++;
    }
    ans = max(ans, n);
	cout << ans << endl;

    return 0;
}
