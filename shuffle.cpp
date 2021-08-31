//check if the given string is the valid shuffle of two strings or not

#include<bits/stdc++.h>
using namespace std;

bool shuffle(string str1,string str2,string str){
    string s = str1+str2;
    int count=0;
    int n = str.length();
    for(int i=0;i<n;i++){
        size_t a = s.find(str[i]);
        if(a != string::npos){
            s[a] = '0';
            count++;
        }
    }
    if(count == n){
       return true; 
    }
    else {return false;}
    
}

int main(){
    string str1 = "geeksfor";
    string str2 ="geeks";
    string s="gak";

    cout<<shuffle(str1,str2,s);
}