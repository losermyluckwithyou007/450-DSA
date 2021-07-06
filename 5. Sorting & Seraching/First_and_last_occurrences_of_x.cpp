#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> arr,int n, int x){

        int idx1 = upper_bound(arr, arr+n, x) - arr;
        int idx2 = upper_bound(arr, arr+n, x) - arr - 1;

        if(idx1==n) return {-1,-1};

        return {idx1,idx2};
    

}

int main(){

    vector<int>  arr  { 1, 3, 5, 5, 5, 5, 67, 123, 125 };
        
        int n=9, x=5;
        
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }

        solve(arr,n,x);
    
    return 0;
}