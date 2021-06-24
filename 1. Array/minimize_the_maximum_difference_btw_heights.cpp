#include <iostream>
#include <algorithm>
using namespace std;

int minHeight(int A[], int n, int k){

    sort(A , A+n);

    int ans = A[n-1]-A[0];

    int smallest = A[0]+k;
    int largest = A[n-1]-k;
    int mi,ma;

    for (int i=0;i<n-1;i++){

        mi = min(smallest, A[i+1]-k);
        ma = max(largest, A[i]+k);

        if(mi < 0) continue;

        ans = min(ans, ma-mi);

    }
    return ans;

}

int main(){

    int K = 3, N = 5;
    int A[] = {3, 9, 12, 16, 20};

    cout<<minHeight(A,N,K);

    return 0;
}