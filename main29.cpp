/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map<char, int> mp;
    int j = 1;
    for(char i = 'a';i<='z';i++)
    {
        mp[i] = j;
        j++;
    }
    string s;
    int sum = 0;
    cin>>s;
    remove(s.begin(), s.end(), ' ');
    for(int i = 0; i<s.length(); i++)
    {
        char ch = s[i];
        sum = sum + mp[ch];
    }
    
    cout<<sum;
    

    return 0;
}
