#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x[n];
    for(int i=0; i<n; i++){
        cin >> x[i];
    }
    
    sort(x, x+n, greater<int>());
    int a[84];
    for(int i=1; i<=84; i++){
        a[i] = x[i-1];
    }
    int d[22][4];
    for(int i=1; i<=20; i++){
        for(int j=1; j<=4; j++){
            d[i][j] = 
        }
    }

    return 0;
}
