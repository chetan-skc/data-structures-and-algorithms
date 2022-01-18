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
        int ds1, t1, dm1;
        cin >> ds1 >> t1 >> dm1;
        int ds2, t2, dm2;
        cin >> ds2 >> t2 >> dm2;

        if(ds1+t1+dm1>ds2+t2+dm2){
            cout << "DRAGON" << endl;
        }else if(ds1+t1+dm1<ds2+t2+dm2){
            cout << "SLOTH" << endl;
        }else{
            if(ds1 > ds2){
                cout << "DRAGON" << endl;
            }else if(ds1 < ds2){
                cout << "SLOTH" << endl;
            }else{
                if(t1 > t2){
                    cout << "DRAGON" << endl;
                }else if(t1 < t2){
                cout << "SLOTH" << endl;
                }else{
                    cout << "TIE" << endl;
                }
            }
        }
    }
    return 0;
}