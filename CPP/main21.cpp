#include<bits/stdc++.h>
using namespace std;

string toBinary(int n)
{
    string r;
    while(n!=0){
        r=(n%2==0 ?"0":"1")+r; 
        n/=2;
    }
    return r;
}


int sum_of_odd_digits(int n) {
    string digits  = toBinary(n);
    int sumOdd = 0;
	for(int i=0; i<digits.size(); i++){
        if(i % 2 == 0)
            sumOdd+=digits[i];
    }
    return sumOdd;
}


int main(){
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        
        int sum = 0;
        for(int i=1; i<=n; i++){
            int t = sum_of_odd_digits(i);
            sum += t;
        }

        cout << sum << endl;
    }

    return 0;
}