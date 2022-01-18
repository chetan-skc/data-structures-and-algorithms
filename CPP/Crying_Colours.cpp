#include <bits/stdc++.h>
using namespace std;

#define jai ios_base::sync_with_stdio(0);
#define mata cin.tie(0);
#define di cout.tie(0);
#define ll long long int

int main(){
    jai mata di
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        int r1,g1,b1;
        cin >> r1 >> g1 >> b1;
        int r2,g2,b2;
        cin >> r2 >> g2 >> b2;
        int r3,g3,b3;
        cin >> r3 >> g3 >> b3;
        if(r1==n&&g2==n&&b3==n){
            cout << 0 << endl;
            continue;
        }
        int a = g1+b1+b2;
        int b = r2+r3+g3;
        int ans = max(a, b);
        cout << ans << endl;
    }
    return 0;
}