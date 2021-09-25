#include<bits/stdc++.h>
using namespace std;

bool solve(int *a, int n, int m, int mid){

    int sum = 0;
    
    for(int i=0;i<n;i++){
        if(a[i]>mid) sum += a[i] - mid;
    }

    if(sum>=m) return true;
    else return false;
}


int main(){

    int n,m,a[n];
    cin>>n>>m;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int lb = 0;
    int ans = 0;
    int ub = *max_element(a,a+n);

    while(lb<=ub){
        int mid = (lb+ub)/2;
        if(solve(a, n, m, mid)){
            ans = mid;
            lb = mid + 1;
        }else {
            ub = mid - 1;
        }
    }
    cout<<"maximum height = "<<ans;

    return 0;
}