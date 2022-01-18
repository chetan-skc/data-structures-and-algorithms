#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   lli t;
   cin >> t;
   while (t--)
   {
      lli n, m;
      cin >> n >> m;
      lli v[m+1];
      
      for(int i=0;i<=m;i++){
         v[i] = (n ^ i);
      }
      sort(v, v+m+1);
      // for(int i=0;i<=m;i++){
      //    cout << v[i] << " ";
      // } cout << endl;
      for(int i=0;i<=m;i++){
         if(v[i] != i){
            cout << i << endl;
            break;
         }
      }
      
   }

   return 0;
}
