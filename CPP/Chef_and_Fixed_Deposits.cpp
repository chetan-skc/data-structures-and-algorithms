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
        int n, i, x, s=0, c=0;
        cin >> n >> x;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr, arr+n, greater<int>());
        for(int i=0; i<n; i++){
            s+=arr[i];
            c+=1;
            if(s>=x){
                break;
            }
        }
        if(s<x){
            cout << -1 << endl;
        }else{
            cout << c << endl;
        }
    }
    return 0;
}