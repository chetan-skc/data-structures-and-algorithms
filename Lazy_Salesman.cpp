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
        int n, w;
        cin >> n >> w;
        int a[n];
        int sum = 0;
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a, a+n);
        for(int i=n-1; i>=0; i--){
            sum += a[i];
            if(sum >= w){
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
