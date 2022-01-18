#include<bits/stdc++.h>
#include<climits>
using namespace std;

int linearSearch(int arr[], int n, int key){

    for(int i = 0; i < n; i++){
        if(arr[i]==key){
            return i+1;
        }
    }
    return -1;
}

int binarySearch(int arr[], int a, int n, int key){
    int b = n;
    if (b >= a) {
    int mid = a + (b - a) / 2;

    // If found at mid, then return it
    if (arr[mid] == key)
      return mid;

    // Search the left half
    if (arr[mid] > key)
      return binarySearch(arr, a, mid - 1, key);

    // Search the right half
    return binarySearch(arr, mid + 1, b, key);
  }
    return -1;
}

int main()
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

    cout << linearSearch(arr, n, key)<<endl;
    cout << binarySearch(arr, a, n, key)<<endl; 

    return 0;
}
