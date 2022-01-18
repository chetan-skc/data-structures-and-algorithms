#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int a1[n],a2[m];
    for(int i=0;i<n;i++){
        cin >> a1[i];
    }
    for(int i=0;i<m;i++){
        cin >> a2[i];
    }

    set<int> s;
    for(int i=0;i<n;i++){
        s.insert(a1[i]);
    }
    int a = s.size();
    for(int i=0;i<m;i++){
        s.insert(a2[i]);
    }
    int b = s.size();

    if(a==b){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }


    
    return 0;
}