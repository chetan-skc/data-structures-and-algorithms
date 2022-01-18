#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int b = 0;
        map<long long, int> m;
        for(int i=0;i<n;i++){
            long long x;
            cin >> x;
            m[x]++;
            b = max(b, m[x]);
        }
        int c = 0;
        if(n>2){
            if(b == 1){
                c = n-2;
            }else{
                c = n-b;
            }
        }
            cout << c << endl;
    }
    return 0;
}