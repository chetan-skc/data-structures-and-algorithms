#include <bits/stdc++.h>
using namespace std;
#define jai ios_base::sync_with_stdio(0);
#define mata cin.tie(0);
#define di cout.tie(0);

int main()
{
    jai mata di
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr+n);
        int c = 0;
        for(int i=0; i<n; i++){
            if(arr[i]>x){
                c = n-i;
                break;
            }continue;
        }
        cout << c << endl;
    }
    return 0;
}