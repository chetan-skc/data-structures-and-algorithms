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
    // It's my code
    // Chetan_skc
    // it's bitwise blend solution using variables given in problem statement.
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int c=x/2;
        if(y>=c){
            cout<<c<<endl;
        }
        else{
            cout<<y<<endl;
        }
    }
}