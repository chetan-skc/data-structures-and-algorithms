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
        string s;
        cin >> s;
        int n = s.size();

        if(n%2 != 0){
            cout << "NO" << endl;
        }else{
            int p = n/2;
            string ans = "YES";
            for(int i=0; i<p; i++){
                if(s[i] != s[p+i]){
                    ans = "NO";
                    break;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}