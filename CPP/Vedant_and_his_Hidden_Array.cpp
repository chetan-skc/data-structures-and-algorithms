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
        int n, x;
        cin >> n >> x;
        
        if(n==1){
            if(x%2==0){
                cout << "Even" << endl;
            }else{
                cout << "Odd" << endl;
            }
            continue;
        }
        if(x%2==1){
            if(n%2==0){
                cout << "Even" << endl;
            }else{
                cout << "Odd" << endl;
            }
        }
        else{
            cout << "Impossible" << endl;           
        }
    }
    return 0;
}