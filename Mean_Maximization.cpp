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
        int n;
        cin >> n;
        int arr[n];
        double sum = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            sum += arr[i];
        }
        sort(arr, arr+n);
        sum -= arr[n-1];
        sum = sum/(n-1);
        cout << fixed << setprecision(6) << sum+arr[n-1] << endl;
    }
    return 0;
}