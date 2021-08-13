#include<bits/stdc++.h>
using namespace std;

string isPalindrome(string S){

    int n = S.length();
    
    if(n==1) return "1";
    int flag = 0;
    for(int i=0;i<n;i++){
        if(S[i]!=S[n-1-i]) { flag=0; break;}
        else flag=1;
    }

    if(flag==1) return "1";
    else return "0";
}

int main(){

    string S = "aaaa";

    cout<<"palindrome String = "<<isPalindrome(S);

    return 0;
}