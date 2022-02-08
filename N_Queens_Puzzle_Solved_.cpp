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
        ll n;
        cin >> n;
        double ans = pow(0.143*n, n);
        if((ans)-floor(ans)>=0.5){
            cout << floor(ans)+1 << endl;
        }
        else{
            cout << floor(ans) << endl;
        }
    }
    return 0;
}
