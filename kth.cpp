//print kth max and min element


#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> v;
        int n,k;
        cin>>n;
        cin>>k;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }

        sort(v.begin(),v.end());

        cout<<v[k-1]<<" "<<v[(n-k)];
    }

}
