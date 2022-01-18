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
    while (t--)
    {
        lli n, m, u ,v, q;
        cin >> n >> m;
        vector<set <int>> frnds(n);

        vector<set <int>> frnds_temp;

        for(int i =0;i<n;i++){
            cin >> u >> v;
            frnds[u].insert(v);
            frnds[v].insert(u);
        }
        cin >> q;
        while (q--)
        {
            int ch;
            cin >> ch;

            if(ch == 1){
                cin >> u >> v;
                
                frnds[u].insert(v);
                frnds[v].insert(u);
            }
            else if(ch == 2){
                cin >> u >> v;

                frnds[u].erase(v);
                frnds[v].erase(u);                
            }
            else{
                ans = 0;
            }
        }
        
    }
    return 0;
}
