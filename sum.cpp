//largest continguous sum of subarray

#include<bits/stdc++.h>
using namespace std;

int largest_sum(int arr[],int n){
    int sum=0,best=0;

    for(int i=0;i<n;i++){
        sum = max(arr[i],sum + arr[i]);
        best = max(sum,best);
    }

    return best;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,arr[1000];
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        cout<<largest_sum(arr,n);
    }
}