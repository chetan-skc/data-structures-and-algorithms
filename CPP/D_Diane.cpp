#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2 == 1)
        {
            if (n == 1)
            {
                cout << "a" << endl;
            }
            else
            {
                string s = string(n / 2, 'a') + "bc" + string(n / 2 - 1, 'a');
                cout << s << endl;
            }
        }
        else
        {
            string s = string(n / 2, 'a') + "b" + string(n / 2 - 1, 'a');
            cout << s << endl;
        }
    }

    return 0;
}
