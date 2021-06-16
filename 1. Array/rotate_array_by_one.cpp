#include <iostream>
using namespace std;

void rotateArray(int arr[], int n)
{
    
    int i;
    int x=arr[n-1];
    
    for(i=n-1 ; i>0 ; i--){
        
        arr[i]=arr[i-1];
        
    }
    arr[0]=x;
    
}

int main(){

    int A[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(A)/sizeof(A[0]);

    rotateArray(A, n);

    for(int i=0 ; i<n ; i++)
    cout<<A[i]<<" ";


    return 0;
}