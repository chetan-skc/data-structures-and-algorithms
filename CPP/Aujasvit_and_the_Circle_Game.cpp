#include <bits/stdc++.h>
using namespace std;

#define jai ios_base::sync_with_stdio(0);
#define mata cin.tie(0);
#define di cout.tie(0);
#define ll long long int
int main(){
    jai mata di
    int t;
    cin>>t;
    while(t){
        int m,x;
        cin>>m>>x;
        m=m-1;
        int a[x];
        a[0]=1;
        int j;
        for(int i=1;i<x;i++){
            j=(m%(i+1))+1;
            if(a[i-1]<j){
                a[i]=a[i-1];}
            else{
                a[i]=a[i-1]+1;}}
        for(int i=0;i<x;i++){
            cout<<a[i]<<" ";}
        cout<<endl;
        t--;}
    return 0;
}