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
        for(int i=1; i<=n*n; i++){
            cout << 1 << " ";
            if(i%n==0){
                cout << endl;
            }
        }
        
    }
    return 0;
}