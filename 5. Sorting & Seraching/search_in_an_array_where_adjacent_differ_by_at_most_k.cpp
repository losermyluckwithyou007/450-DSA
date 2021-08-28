#include<bits/stdc++.h>
using namespace std;

void printArray(int *arr, int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int search(int *arr, int n, int k, int x){

    int ans = -1;
    int i=0;

    while(i<n){
        if(arr[i]==x){
            ans=i;
            break;
        }
        int y = max(1, abs(arr[i]-x)/k);
        i = i + y;
    }

    return ans;

}

int main(){

    int arr[] = {20, 40, 50, 70, 70, 60};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 20;
    int x = 60;

    printArray(arr, n);

    cout<<"The index of "<<x<<" is "<<search(arr, n, k, x);

    return 0;
}