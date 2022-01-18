#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
		int N;
		cin>>N;
		int temp;
		vector <int> v;
		for(int i=0;i<N;i++){
			cin>>temp;
			v.push_back(temp);
		}
		int k=N-2;
		for(k;v[k]>=v[k+1];k--){}
		// if the array is in decreasing order than next permutation can not be done
		if(k==(-1)){
		    cout<<k<<endl;
		    continue;
		}
		int i=N-2;
		int last = v[N-1];
		stack <int> st;
		st.push(last);
		v.pop_back();
		// pushing into the stack until we find a break point 
		// that is starting from the last element of the array to the element which is 
		// less than the previous element (the element on the right of it)
		for(i;i>=0;i--){
			if(v[i]<st.top()){
			    temp = v[i];
			    st.push(v[i]);
			    v.pop_back();
			    break;
			}
			else{
			    st.push(v[i]);
			    v.pop_back();
			}
			
		}
		// making a temparary array to store elements from the stack
		vector <int> v4u;
		while(!st.empty()){
			v4u.push_back(st.top());
			st.pop();
		}
		// sorting the array to get the next element for the breakpoint element
		// which we have stored in temp
		sort(v4u.begin(),v4u.end());
		int pos;
		int s = v4u.size();
		// we need to find the position of breakpoint element so we can swap it with 
		// the last element in the main array i.e. v
		for(int i=0;i<s;i++){
		    if(temp<v4u[i]){
		        pos=i;
		        break;
		    }
		    
		}
		swap(v4u[0],v4u[pos]);
		sort(v4u.begin()+1, v4u.end());
		
		for(int i=0;i<s;i++){
		    v.push_back(v4u[i]);
		}
		for(int j=0;j<N;j++){
			cout<<v[j];
		}
		cout<<endl;
	}
	return 0;
}