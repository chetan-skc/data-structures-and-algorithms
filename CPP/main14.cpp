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
        for(int j=0;j<n;j++){
            cin >> arr[j];
        }

        for(int i=n; i>=1; i--){
            for(int j=0; j<n; j++){
                if(arr[i] != arr[j]){
                    arr[i] -= 1;
                    arr[j] += 1;
                }else if(arr[i] == arr[j]){
                    break;
                }
                return -1;
            }
        }
        for(int i=0;i<n;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
        for(int j=0;j<n;j++){
            cout << arr[j] << " ";
        }
    }
    return 0;
}
