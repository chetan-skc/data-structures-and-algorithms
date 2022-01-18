#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int lli;

int find_palindromes_in_sub_string(const string& input, int j, int k) {
  int count = 0;
  for (; j >= 0 && k < input.length(); --j, ++k) {
    if (input[j] != input[k]) {      
      break;
    } 
    ++count;
  }
  return count;
}

int find_all_palindrome_substrings(const string& input) {
  int count = 0;
  for (int i = 0; i < input.length(); ++i) {    
    count += find_palindromes_in_sub_string(input, i - 1, i + 1);
    count += find_palindromes_in_sub_string(input, i, i + 1);
  }
  return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli n, m;
    cin >> n >> m;
    string st;
    for (int i = 0; i < n; i++)
    {
        cin >> st[i];
    }
    while(m--){
        int a, b;
        cin >> a >> b;
        int c = b-a+1;
        string s;
        for(int i=0;i<c;i++){
            s[i] = st[a++ - 1];
        }
        cout << find_all_palindrome_substrings(s) << endl; 
    }

    return 0;
}
