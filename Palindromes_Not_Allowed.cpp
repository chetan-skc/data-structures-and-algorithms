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
        int n;
        cin >> n;
        string s;
        for(int i=0; i<n; i++){
            s = s + char('a'+(i%26));
        }
        cout << s << endl;
    }
    return 0;
}