#include<bits/stdc++.h>
using namespace std;

int rev_arr(int arr[] , int n){
    int low=0,high=n-1,temp;
    while(low<=high){
        temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n , arr[1000];
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        rev_arr(arr,n);

        for(int i=0;i<n;i++){
            cout<<arr[i];
        }
    }
}