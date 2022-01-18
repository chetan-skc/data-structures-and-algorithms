#include <bits/stdc++.h>
#include<algorithm>
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
        lli n;
        cin >> n;
        lli a = floor(n/6);
        lli b = floor(n/8);
        lli c = floor(n/10);
        lli x = (a+1)*15;
        lli y = (b+1)*20;
        lli z = (c+1)*25;
        lli d = (x<((y<z)?y:z))?x:((y<z)?y:z);
        if(n==0){
            cout << "0" << endl;
        }else if(n%6 == 0){
            cout << a*15 << endl;
        }else if(n%8 == 0){
            cout << b*20 << endl;
        }else if(n%10 == 0){
            cout << c*25 << endl;
        }else{
            cout << d << endl;
        }
    }

    return 0;
}
