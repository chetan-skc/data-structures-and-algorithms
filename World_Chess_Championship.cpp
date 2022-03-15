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
        int x;
        cin >> x;
        int d = 0, n = 0, c = 0;
        char a[14];
        for (int i = 0; i < 14; i++)
        {
            cin >> a[i];
            // It's my code
            // Chetan_skc
            // it's bitwise blend solution using variables given in problem statement.
            switch (a[i])
            {
            case 'C':
                c += 2;
                break;
            case 'N':
                n += 2;
                break;
                // It's my code
                // Chetan_skc
                // it's bitwise blend solution using variables given in problem statement.
            case 'D':
                c += 1;
                n += 1;
                break;
            }
        }
        // It's my code
        // Chetan_skc
        // it's bitwise blend solution using variables given in problem statement.
        (c > n) ? cout << 60 * x : ((c != n) ? cout << 40 * x : cout << 55 * x);
        cout << endl;
        // Kindly change the variables
    }
    return 0;
}
