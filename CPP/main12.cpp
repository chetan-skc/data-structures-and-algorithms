#include <bits/stdc++.h>
using namespace std;
#define print cout <<
#define nl '\n'

template <class T>
ostream& operator,(ostream& cout, T data) {
  cout << ' ' << data;
  return cout;
}

template <class T>
ostream& operator<<(ostream& cout, pair<T, T> p) {
  cout << '{' << p.first << ' ' << p.second << '}';
  return cout;
}

#define ii input<int>
template<class T>
inline
T input(){
  T data;
  cin >> data;
  return data;
}

void solve(){
  long long a, b, dif;
  cin >> a >> b;
  dif = abs(a - b);
  if(!dif){
    print 0, 0;
    return;
  }  
  a %= dif;
  b %= dif;
  print dif, min({a, b, dif - a, dif - b});
}



int main() {
  int t = ii();
  while(t--){
    solve();
    print nl;
  }
  return 0;
}



