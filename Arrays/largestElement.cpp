//largest element in the array

#include<bits/stdc++.h>
using namespace std;

int largestElement(int n , int arr[] ){
    int max= 0;

    for(int i=0;i<n;i++){
        if(arr[i]>arr[max]){
            max = i;
        }
    }

    return arr[max];
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

        cout<<largestElement(n,arr)<<endl;
    }
}