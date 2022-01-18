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
        string a, s;
        cin >> a >> s;
        ll la = (ll)a.length();
        ll ls = (ll)s.length();

        ll ia = la-1, is = ls-1;

        string b;

        bool done = true;

        while(ia >= 0 and is >=0){
            ll va = a[ia] - '0';
            ll vs = s[is] - '0';
            if(va <= vs){
                ll diff = vs - va;
                b.push_back((char)('0'+diff));
                ia--, is--;
            }else{
                is--;
                vs += (10 * ((ll)s[is]-'0'));
                ll diff = vs - va;
                if(diff > 9 or diff < 0){
                    done = false;
                    break;
                }
                b.push_back((char)('0'+diff));
                ia--, is--;
            }
        }
        if(!done){
            cout << -1 << endl;
            continue;
        }

        if(ia >= 0){
            done = false;
        }

        while(is >= 0){
            b.push_back(s[is--]);
        }

        while (b.back() == '0')
        {
            b.pop_back();
        }

        reverse(b.begin(), b.end());

        cout << b << endl;

    }
    return 0;
}