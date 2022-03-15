#include <iostream>
using namespace std;
#define ll long long int
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
// It's my code
// Chetan_skc
// it's codechef FEB222C problem solution using variables given in problem statement.
int main()
{
    FIO;
    int t;
    cin >> t;
    // It's my code
    // Chetan_skc
    // it's codechef FEB222C problem solution using variables given in problem statement.
    while (t--)
    {
        int n, c, l = 0;
        cin >> n;
        int a[n];
        // It's my code
        // Chetan_skc
        // it's codechef FEB222C problem solution using variables given in problem statement.
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            c = 1 + l + i;
            c == a[i] ? l++ : 0;
        }
        // It's my code
        // Chetan_skc
        // it's codechef FEB222C problem solution using variables given in problem statement.
        cout << l << endl;
    }
    return 0;
}
