#include <bits/stdc++.h>
using namespace std;
  
int binarySearch(int arr[], int a, int n, int key)
{
    while (a <= n) {
        int mid = a + (n - a) / 2;
  
        if (arr[mid] == key)
            return mid;
  
        if (arr[mid] < key)
            a = mid + 1;
  
        else
            n = mid - 1;
    }
  
    return -1;
}
  
int main(void)
{
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int key;
    cin >> key;
    int a = 0;


    int result = binarySearch(arr, a, n - 1, key);
    cout << result << endl;

    return 0;
}