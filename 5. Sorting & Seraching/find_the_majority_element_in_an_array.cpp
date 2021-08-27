#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int majorityElement(int *arr, int n){

    int ma = arr[0];
    int count = 1;

    for(int i=1;i<n;i++){
        if(arr[i]==ma) count++;
        else count--;

        if(count==0){
            ma = arr[i];
            count++;
        }
    }

    int c=0;

    for(int i=0;i<n;i++){
        if(arr[i]==ma) c++;
    }

    if(c>(n/2)) return ma;
    else return -1;

}

int main(){

    int arr[] = {3,1,3,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    printArray(arr, n);

    cout<<" Majority element = "<<majorityElement(arr, n);

    return 0;

}