#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        float x = (a+b)/2;

        int c = ceil((b-x)/2) + ceil((x-a)/2);

        cout << c << endl;
    }

    return 0; 
}