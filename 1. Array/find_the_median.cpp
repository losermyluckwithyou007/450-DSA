#include<bits/stdc++.h>
using namespace std;

int find_median(int arr[], int n){
    
    sort(arr,arr+n);

    if(n%2==0){
        int avg = (arr[n/2] + arr[(n/2)-1]) / 2;

        return avg;
    }
    else{
        return arr[(n/2)];
    }
}

int main(){

    int arr[] = {56, 67, 30, 79};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"The Median is = "<<find_median(arr, n);

    return 0;
}