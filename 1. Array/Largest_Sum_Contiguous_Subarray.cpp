#include <iostream>
using namespace std;

int sumofSubArray(int A[], int n){
    int max=0;
    int curSum=0;

    for(int i=0;i<n;i++){
        curSum+=A[i];

        if(curSum > max)
        max=curSum;

        if(curSum < 0)
        curSum=0;

    }
    return max;
}

int main(){

    int A[] = {5,-7,-8,5,7,-1};
    int n = sizeof(A)/sizeof(A[0]);

    

    for(int i=0;i<n;i++)
    cout<<A[i]<<" ";

    cout<<endl;

    cout<<sumofSubArray(A, n);

    return 0;

}