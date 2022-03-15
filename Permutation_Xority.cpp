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
        if (n < 3)
        {
            cout << "-1" << endl;
            continue;
        }
        // It's my code
        // Chetan_skc
        // it's bitwise blend solution using variables given in problem statement.
        if (n % 2 == 1)
        {
            for (int i = 1; i <= n; i++)
                cout << i << " ";
            cout << endl;
            continue;
        }
        // It's my code
        // Chetan_skc
        // it's bitwise blend solution using variables given in problem statement.
        cout << "2 3 1 4 ";
        for (int i = 5; i < n + 1; i++)
            cout << i << " ";
        cout << endl;
        // It's my code
        // Chetan_skc
        // it's bitwise blend solution using variables given in problem statement.
    }
    return 0;
}
