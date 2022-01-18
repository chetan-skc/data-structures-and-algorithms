#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define mod 1000000007
 
int main(){
    FIO;
    int t,n,k,i,j;
    string s;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n];
        
        for(i=0;i<n;i++)
            cin >> a[i];
        cin >> s;    
        
        vector<int> v1,v2;
        for(i=0;i<n;i++)
            if(s[i]=='B')
                v1.push_back(a[i]);
            else 
                v2.push_back(a[i]);
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        for(i=0;i<v1.size();i++)
            if(v1[i]<i+1)
                break;
        if(i<v1.size()){
            cout << "NO\n"; continue;
        }
            
        j=v2.size();
        for(i=0;i<j;i++)
            if(v2[i]>n-j+i+1)
                break;
 
        if(i<j){
            cout << "NO\n"; continue;
        }
        cout << "YES\n";
                
    }
	return 0;
}