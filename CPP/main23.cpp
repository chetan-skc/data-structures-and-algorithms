#include <bits/stdc++.h>
using namespace std;

int main()
{
   // your code goes here
   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin >> n;
      vector<int> a(n);
      for(int i=0;i<n;i++){
          cin >> a[i];
      }
      int min = *min_element(a.begin(),a.end());
      int ans = 0;
      int ch;
      bool res = false;
      for(int &i : a){
          if(i == min){
              continue;
          }
          ch = i%(i-min);
          if(ch == min){
              ans++;
          }
          else{
              min = 0;
              res = true;
              ans = 0;
              break;
          }
      }
      if(res){
          for(int i : a){
              if(i != 0){
                  ans++;
              }
          }
      }
      cout << ans << endl;
   }
   return 0;
}
