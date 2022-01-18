#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define mod 998244353 

 
int main(){
    FIO;
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;

        int mip;

        ll rt = sqrt(n);

        for(mip=2; mip<=rt; mip++){
            if(n%mip == 0){
                break;
            }
        } 

        ll x;

        if(mip == rt+1){
            x = n+1;
        }
        else{
            x = n + n/mip;
        }

        cout << x << endl;
    }
	return 0;
}