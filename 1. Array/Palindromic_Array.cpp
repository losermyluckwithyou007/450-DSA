#include<bits/stdc++.h>
using namespace std;

int palinArray(int arr[], int n){

    for(int i=0;i<n;i++){
        
        int ans = 0;
        int num = arr[i];

        while(num>0){

            int r = num%10;
            num = num/10;
            ans = (ans*10) + r;
        }
        if(ans!=arr[i]) return 0;
    }
    return 1;
}

int main(){

    int arr[] = {123, 222, 333, 444, 555};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Palindromic Array = " <<palinArray(arr, n);

    return 0;
}