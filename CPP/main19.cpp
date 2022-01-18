#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin >> t;
   while (t--)
   {
      long long int n;
      cin >> n;
      long int a[n];
      for(int i=0;i<n;i++){
         cin >> a[i
         ];
      }
      map<long int, long int> v;
      long int c = 0;
      for(int i=0;i<n;i++){
         if(v.find(a[i])==v.end()){
            v[a[i]]++;
            c++;
         }else{
            if(v[a[i]]<a[i]-1){
               c++;
               v[a[i]]++;
            }
         }
      }
      cout << c << endl;
   }
      
   return 0;
}
