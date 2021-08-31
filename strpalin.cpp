//check string palindrome

#include<bits/stdc++.h>
using namespace std;

bool check(char str[]){
     int low=0,high=strlen(str)-1;
     while(low<high){
         if(str[low]!=str[high]){
             return false;
         }
         low++;
         high--;
     }

     return true;
}

int main(){
    char str[] = "abba";
    if(check(str)){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}