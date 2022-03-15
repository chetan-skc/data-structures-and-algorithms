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
    // It's my code
    // Chetan_skc
    // it's bitwise blend solution using variables given in problem statement.
    ll n;
    cin >> n;
    // It's my code
    // Chetan_skc
    // it's bitwise blend solution using variables given in problem statement.
    if (n % 2 != 0)
    {
        cout << -1 << endl;
    }
    // It's my code
    // Chetan_skc
    // it's bitwise blend solution using variables given in problem statement.
    else
    {
        cout << 0 << " " << (n / 2) << endl;
        cout << (n / 2) << " " << 0 << endl;
        cout << 0 << " " << -(n / 2) << endl;
        cout << -(n / 2) << " " << 0 << endl;
    }
    // It's my code
    // Chetan_skc
    // it's bitwise blend solution using variables given in problem statement.
    return 0;
}
