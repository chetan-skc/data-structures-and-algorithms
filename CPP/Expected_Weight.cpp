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

        ll p=1, q; 
        if(n%2==0){
            if(n%4==0){
                q = 1;

                p = n/4;
                p %= mod;

                p *= (n+1);
                p %= mod;

                p *= (n+1);
                p %= mod;
            }else{
                q = 2;

                p = n/2;
                p %= mod;

                p *= (n+1);
                p %= mod;

                p *= (n+1);
                p %= mod;
            }
        }else{
            q = 1;

            p *= (n+1)/2;
            p %= mod;
            p *= (n+1)/2;
            p %= mod;

            p *= n;
            p %= mod;
        }  

        ll inv = 0;

        if(q==1){
            inv = 1;
        }
        else if(q==2){
            inv = 499122177;
        }

        ll ans;
        ans = p * inv;
        ans %= mod;

        cout << ans << endl;   
    }
	return 0;
}