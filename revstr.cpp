#include<bits/stdc++.h>
using namespace std;

void rev_string(char str[]){
    int low=0,high=strlen(str) - 1;
    while(low<high){
        swap(str[low],str[high]);
        low++;
        high--;
    }
}

int main(){
    char str[] = "geeksforgeeks";
    rev_string(str);
    cout<<str;
}
