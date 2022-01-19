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
        ll k;
        cin >> k;
        ll c = 0;
        while(k%2==0){
            k = k/2;
            c = c+1;
        }
        cout << c << endl;
    }
    return 0;
}