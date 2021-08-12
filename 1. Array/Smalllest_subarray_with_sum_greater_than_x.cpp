#include<bits/stdc++.h>
using namespace std;

int sb(int A[],int n,int x){

    int mi = INT_MAX;
    int i=0,j=0;
    int s=0;

    while(i<=j and j<n){

        while(s<=x and j<n){
            s += A[j];
            j++;
        }
        while(s>x and i<j){
            mi = min(mi , j-i);
            s -= A[i];
            i++;
        }
    }
    return mi;
}

int main(){

    int A[] = {1, 4, 45, 6, 0, 19};
    int n = sizeof(A)/sizeof(A[0]);

    cout<<"Smallest subarray is = "<<sb(A, n, 51);

    return 0;
}