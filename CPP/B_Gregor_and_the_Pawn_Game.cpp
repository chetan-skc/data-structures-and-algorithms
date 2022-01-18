#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int lli;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin >> t;
    lli ans;
    while (t--)
    {
        lli n;
        cin >> n;
        string p2, p1;
        cin >> p2 >> p1;
        ans = 0;
    
        for(int i=0;i<n;i++){
            if(p1[i] == '1'){
                if(p2[i] == '0'){
                    ans++;
                }
                else if(i>0 && p2[i-1] == '1'){
                    ans++;
                    p2[i-1] == '0';}
                else if(i<n-1 && p2[i+1] == '1'){
                    ans++;
                    p2[i+1] == '0';
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
