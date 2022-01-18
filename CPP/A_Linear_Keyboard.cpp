#include<iostream>
#include<algorithm>
using namespace std;
int a[55];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        int k=0;
        for(int i=0; i<s2.size(); i++)
        {
            for(int j=0; j<s1.size(); j++)
            {
                if(s2[i]==s1[j])
                {
                    a[k++]=j;
                    break;
                }
            }
        }
 
        int sum=0;
        for(int i=0; i<k-1; i++)
        {
            sum+=abs(a[i]-a[i+1]);
        }
        cout<<sum<<endl;
 
    }
}