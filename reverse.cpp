#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int n){
    int low=0,high=n-1;
    while(low<high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[1000],n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

    reverse(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    }

}