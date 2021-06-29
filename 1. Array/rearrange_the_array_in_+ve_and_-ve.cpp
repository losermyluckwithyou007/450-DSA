#include <assert.h>
#include <iostream>
using namespace std;

void rearrange(int *A, int n){

    int i=0;
    int j=n-1;

    while(i<=j){

        if(A[j]<0){
            j--;
        }
        else if(A[i]>0){
            i++;

        }
        else if(A[i]<0 && A[j]>0)
        {
            swap(A[i], A[j]);
            i++;
            j--;
        }
    }
    if(i==0 or i==n){
        for(int i=0;i<n;i++) cout<<A[i]<<" ";
    }
    else {
        int k=0;
        while(k<n && i<n){
            swap(A[i], A[k]);
            k=k+2; i++;
        }
    }
    
    
}

void printArray(int arr[], int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{

    int arr[] = {1, 2, 3, -4, -1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array is \n";
    printArray(arr, n);

    rearrange(arr, n);

    cout << "Rearranged array is \n";
    printArray(arr, n);

    return 0;
}