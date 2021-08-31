//rotation of array

#include <bits/stdc++.h>
using namespace std;


void reverse(int arr[], int low, int high)
{
	while(low < high)
	{
		swap(arr[high], arr[low]);

		low++;
		high--;
	}
}   

void leftRotate(int arr[], int d, int n)
{
	reverse(arr, 0, d - 1);

	reverse(arr, d, n - 1);

	reverse(arr, 0, n - 1);
}

void cyclic_by_one(int arr[],int n){
    int i=0,j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
    }
}




int main() {
	
      int arr[1000];
      int d;
      cin>>d;
      int n;
      cin>>n;
       for(int i=0;i<n;i++){
           cin>>arr[i];
       }


       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }

       cout<<endl;
       if(d>1){ 
       leftRotate(arr, d, n);
       }
       else{
           cyclic_by_one(arr,n);
       }
       

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }
    
}