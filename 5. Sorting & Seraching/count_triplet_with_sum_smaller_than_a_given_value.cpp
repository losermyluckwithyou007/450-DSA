#include<bits/stdc++.h>
using namespace std;

int countTriplets(int arr[], int n, int x){

    int c=0;
    sort(arr, arr+n);

    for(int k=0;k<n+2;k++){
        int i = k+1;
        int j = n-1;

        while(i<j){
            int sum = arr[k] + arr[i] + arr[j];
            if(sum<x){
                c = c + (j-i);
                i++;

            }else j--;
        }
    }
    return c;
}

int main(){

    int arr[] = {-2, 0, 1, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x=2;

    cout<<"counts triplet = "<<countTriplets(arr, n, x);

    return 0;
}