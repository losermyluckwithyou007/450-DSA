#include <iostream>
using namespace std;

void Sort(int A[], int n){

    int low,mid,high;
    low=0;
    mid=0;
    high=n-1;

    while(mid<=high){

        switch(A[mid]){

            case 0:
                swap(A[low], A[mid]);
                low++;
                mid++;
                break;

            case 1:
                mid++;
                break;

            case 2:
                swap(A[mid], A[high]);
                high--;
                break;        
        }
    }
}

int main(){
    
    int  arr[]= {0, 2, 1, 2, 0, 0, 0};
    int n = sizeof(arr)/sizeof(arr[0]);

    Sort(arr, n);

    for(int sort : arr)
        cout<<sort<<" ";


    return 0;
}