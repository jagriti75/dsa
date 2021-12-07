#include<bits/stdc++.h>
using namespace std;

int check_sort(int arr[] , int n){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
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

        if(check_sort(arr,n)){
            cout<<"sorted"<<endl;
        }

        else{
            cout<<"not sorted"<<endl;
        }
    }
}