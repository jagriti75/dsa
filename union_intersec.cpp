//intersection and union of array

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void print_union(int arr1[],int arr2[],int m,int n){
            int i = 0, j = 0;
            while (i < m && j < n) {
                    if (arr1[i] < arr2[j])
                        cout << arr1[i++] << " ";
 
                    else if (arr2[j] < arr1[i])
                         cout << arr2[j++] << " ";
 
                    else {
                         cout << arr2[j++] << " ";
                         i++;
                        }
            }
 
    
            while (i < m)
                cout << arr1[i++] << " ";
 
             while (j < n)
                cout << arr2[j++] << " ";
        }

        void print_intersection(int arr1[],int arr2[],int m,int n){
            int i=0,j=0;
             

                while(i < m && j < n) {
                if (arr1[i] < arr2[j]){
                    i++;
                    }
                else if (arr2[j] < arr1[i]){
                    j++;
                     }
                else{
                    cout<<arr2[j]<<" ";
                    i++;
                    j++;
                    }
        }
                

        }
};

int main(){
      int t;
     cin>>t;
        while(t--){
        int m,n;
        int arr1[1000];
        int arr2[1000];
       

        cin>>m;
        for(int i=0;i<m;i++){
            cin>>arr1[i];
        } 
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>arr2[j];
        }

    
        
        Solution obj;
        obj.print_union(arr1,arr2,m,n);
        cout<<endl;
        obj.print_intersection(arr1,arr2,m,n);
       
  }
  return 0;
}