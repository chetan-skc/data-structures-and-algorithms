#include <bits/stdc++.h>
using namespace std;

#define print cout <<
#define nl '\n'

template <class T>
ostream &operator,(ostream &cout, T data) {
  cout << ' ' << data;
  return cout;
}

template<class T>
inline
T input(){
  T data;
  cin >> data;
  return data;
}

template<class T>
inline
vector<T> input(T size){
  vector<T> data(size);
  for(int i = 0 ; i < size ; i++) cin >> data[i];
  return data;
}


class Solution {
 public:
  // vector<int> findPerm(const string, int);
  vector<int> repeatedNumber(const vector<int> &);
};

vector<int> Solution::repeatedNumber(const vector<int> &A) {
    size_t n = A.size();
    int sum{};
    double prod{(double)1};
    for(int i = 0 ; i < A.size() ; i++) {
        prod *= (double)A[i] / (i+1);
        sum += A[i] - (i+1);
    }
    int x{}, r{};
    double temp = sum / (prod - 1);
    if(temp - (int)temp > 0.5) x = ceil(temp);
    else x = floor(temp);
    r = sum + x;

    return {r, x};
}


void solve(){
  int x1{input<int>()}, x2{input<int>()};
  int y1{input<int>()}, y2{input<int>()};
  int f1{input<int>()}, f2{input<int>()};
  
  int ans{abs(y1 - x1) + abs(y2 - x2)};
  if(x1 == y1 && y1 == f1 && (f2 - x2) * (y2 - f2) > 0) ans += 2;
  if(x2 == y2 && y2 == f2 && (f1 - x1) * (y1 - f1) > 0) ans += 2;
  
  print ans;

  return;

}

int main() {
  int x = input<int>();
  while(x--){
    solve();
    print nl;
  }
  return 0;
}

