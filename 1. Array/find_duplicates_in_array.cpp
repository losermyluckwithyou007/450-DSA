#include <iostream>
#include <algorithm>
using namespace std;

int duplicate(int A[], int n){
    
        sort(A, A+n);
        
        for(int i=0;i<n;i++){
            if(A[i]==A[i+1])
                return A[i];
        }
        return 0;

}

int main(){
    
    int  arr[]= {4,5,8,10,1,3,2,6,10};
    int n = sizeof(arr)/sizeof(arr[0]);

        cout<<duplicate(arr, n)<<" ";

    return 0;
}