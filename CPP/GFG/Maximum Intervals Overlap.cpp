#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	
	public:
	vector<int> findMaxGuests(int Entry[], int Exit[], int N)
	{
	   // Your code goes here
	   sort(Entry,Entry + N);
	   sort(Exit,Exit + N);
	    int i  = 0;
	    int j = 0;
	    int st = INT_MIN;
	    vector<int> res;
	    int ret = INT_MIN;
	    while(i < N){
	        if(Entry[i] <= Exit[j]){
	            st  = max(st,Entry[i]);
	            i++;
	        }
	        else if(Entry[i] > Exit[j]){
	            if(ret < i - j){
	                res = {i - j,st};
	                ret = i - j;
	            }
	            while(Exit[j] < Entry[i]){
	                j++;
	            }
	        }
	    }
	    if(ret < i - j){
	        res = {i - j,st};
	    }
	    return res;
	}

};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int entry[n],exit1[n];
        for(i=0;i<n;i++)
        cin>>entry[i];
        for(i=0;i<n;i++)
        cin>>exit1[i];
        Solution obj;

	    vector<int> p = obj.findMaxGuests(entry, exit1, n);
	    cout<<p[0]<<' '<<p[1];
	    cout<<"\n";
    }
    return 0;
} 