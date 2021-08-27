#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void move(int arr[],int n){
            int k=0;
            for(int i=0;i<n;i++){
                if(arr[i]<0){
                    swap(arr[k],arr[i]);
                    k++;
                }
            }

        }

}; 

int main(){
  int t;
  cin>>t;
  while(t--){
        int arr[1000];
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution obj;
        obj.move(arr,n);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
  }
  return 0;
}
