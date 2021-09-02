#include<bits/stdc++.h>
using namespace std;

int findMaxSum(int a[], int n){

    int max1=a[0];
    int max2=0;

    if(n>1){
        max2=max(a[0], a[1]);
    }

    for(int i=2;i<n;i++){
        int temp = max1 + a[i];
        max1=max2;
        max2=max(temp, max2);
    }

    return max(max1, max2);
}

int main(){

    int a[] = {5,5,10,100,10,5};
    int n = 6;

    cout<<"Answer = "<<findMaxSum(a, n);

    return 0;
}