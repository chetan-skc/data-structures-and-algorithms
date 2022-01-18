#include <bits/stdc++.h>
using namespace std;

#define jai ios_base::sync_with_stdio(0);
#define mata cin.tie(0);
#define di cout.tie(0);
#define ll long long int

bool sqr(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    if(sum >= 0){
        int c = sqrt(sum);
        return (c * c == sum);
    }
    return false;
}
int main(){
    jai mata di
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += arr[i];
        }
        if(sqr(arr, n)){
            cout << 0 << endl;
        }else{
            
        }
    }
    return 0;
}