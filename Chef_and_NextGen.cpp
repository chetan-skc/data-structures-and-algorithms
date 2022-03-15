#include <iostream>
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
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        // It's my code
        // Chetan_skc
        // it's bitwise blend solution using variables given in problem statement.
        int p = a * b;
        int q = x * y;
        (q >= p) ? cout << "YES" : cout << "NO";
        cout << endl;
    }

    return 0;
}
