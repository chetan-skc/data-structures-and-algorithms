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
        int n, x;
        cin >> n >> x;
        if(x<=n){
            cout << x << endl;
        }else{
            while(x>n){
                x = x-n-1;
            }
            cout << x << endl;
        }
    }
    return 0;
}