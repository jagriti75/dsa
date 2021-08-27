#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

        vector<int> maxmin(vector<int> v,int n){

        int max=v[0],min=v[0];
        for(int i=0;i<n;i++){
            if(v[i]>=max){
            max=v[i];
        }
            else if(v[i]<=min){
            min = v[i];
        }
    }

    return {max,min};
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> v;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }

        Solution obj;
        vector<int> ans = obj.maxmin(v,n);
        cout<<ans[0]<<" "<<ans[1];

    }
    return 0;
}