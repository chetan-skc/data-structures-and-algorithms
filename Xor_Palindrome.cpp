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
        int x = 0, y = 0, n;
        cin >> n;
        string s;
        cin >> s;
        // It's my code
        // Chetan_skc
        // it's codechef FEB222C problem solution using variables given in problem statement.
        for (int i = 0; i < n; i++)
        {
            (s[i] == '0') ? x++ : y++;
        }
        if (n % 2 == 0)
        {
            if (x == y)
                cout << "YES\n";
            else if (x % 2 == 0 && y % 2 == 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        // It's my code
        // Chetan_skc
        // it's codechef FEB222C problem solution using variables given in problem statement.
        else
            cout << "YES" << endl;
    }
    return 0;
}