// second largest element in the array 

#include<bits/stdc++.h>
using namespace std;

int secondLargestElement(int arr[] , int n){
    int largest = 0;
    int res = -1;

    for(int i=0;i<n;i++){
        if(arr[i]>arr[largest]){
            largest = i;
            res = largest;
        }
        else if(arr[i] != arr[largest]){
            if(res == -1 || arr[i]>arr[res]){
                res = i;
            }
        }

        return arr[res];
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

        cout<<secondLargestElement(arr,n)<<endl;
    }
}