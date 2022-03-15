#include <iostream>
using namespace std;
#define ll long long int
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
// It's my code
// Chetan_skc
// it's bitwise blend solution using variables given in problem statement.
int main()
{
    FIO;
    int t;
    cin >> t;
    // It's my code
    // Chetan_skc
    // it's bitwise blend solution using variables given in problem statement.
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int c = 0;
        for(int i=0; i<=n; i++){
            for(int j=n; j>1;j--){
                if(a[i] & a[j]==0){
                    continue;
                    i++;
                }else{
                    if(a[i]>a[j]){
                        swap(a[i], a[j]);
                        c++;
                        i++;
                        j--;
                    }else{
                        continue;
                        i++;
                    }
                }
            }
        }
        if(c!=0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
