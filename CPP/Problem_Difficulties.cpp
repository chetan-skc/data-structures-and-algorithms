#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int numOfSubsets(int arr[], int n, int k) {
        // code here
        vector<long long int> left, right, arr1,arr2;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i] > k)
                continue;
            if(i <=n/2)
                arr1.push_back(arr[i]);
            else
                arr2.push_back(arr[i]);
        }
        
        for(int i=0; i < (1<<(arr1.size())) ; i++)
        {
            long long int value = 1;
            for(int j=0; j<arr1.size();j++)
                if(i & (1<<j))
                    value = value*arr1[j];
                
            if(value<=k)
                left.push_back(value);
        }
        
        for(int i = 0; i < (1<<(arr2.size())) ; i++)
        {
            long long int value = 1;
            for(int j=0;j<arr2.size();j++)
            {
                if(i & (1<<j))
                    value = value*arr2[j];
            }
            
            if(value<=k)
                right.push_back(value);
        }
        
        sort(right.begin(),right.end());
        
        int count = 0;
        for(int i=0;i<left.size();i++)
            count = count + upper_bound(right.begin(),right.end(),(k/left[i])) - right.begin();
        
        return count-1;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>K;

        Solution ob;
        cout << ob.numOfSubsets(arr,N,K) << endl;
    }
    return 0;
}  // } Driver Code Ends