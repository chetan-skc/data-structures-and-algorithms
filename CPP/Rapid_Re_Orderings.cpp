#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define mod 1000000007

 
int main(){
    FIO;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> b(2*n);
        for(int &i : b){
            cin >> i;
        }

        if(n==1){
            if(b[0]==b[1]){
                cout << b[0] << endl;
            }else{
                cout << -1 << endl;
            }
            continue;
        }

        map<int, int> fre;

        for(int i : b){
            fre[i]++;
        }

        vector<int>uniqe;

        for(auto pii : fre){
            uniqe.push_back(pii.first);
        }

        sort(uniqe.begin(), uniqe.end());

        bool ans = true;
        if(uniqe.size() != n){
            ans = false;
        }

        int mid;
        if(n%2==0){
            mid = n/2 - 1;
        }else{
            mid = n/2;
        }

        if(ans && fre[uniqe[mid]]!=3){
            ans = false;
        }
        if(ans && fre[uniqe[n-1]]!=1){
            ans = false;
        }
        for(int i=0; i<n-1 && ans; i++){
            if(i != mid && fre[uniqe[i]]!=2){
                ans = false;
            }
        }
        if(ans){
            for(int i : uniqe){
                cout << i << " ";
            }
            cout << endl;
        }else{
            cout << -1 << endl;
        }
    }
	return 0;
}