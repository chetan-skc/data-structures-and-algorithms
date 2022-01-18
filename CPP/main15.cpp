#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];

        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        if(n == 1){
            cout << "1" << endl;
            return 0;
        }
        int d = 0;
        int mx = -1;

        for(int i =0 ;i<n;i++){
                if(arr[i]>mx && arr[i]>arr[i+1]){
                    d ++;
                }
                mx = max(mx, arr[i]);
            }

        cout << d <<endl;
    }

    return 0;
}
