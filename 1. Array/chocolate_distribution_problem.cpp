#include<bits/stdc++.h>
using namespace std;

int chocoDist(int A[],int N,int M){

    sort(A,A+N);

    int min = INT_MAX;
    int d;

    for(int i=0;i+M-1<N;i++){

        d = A[i+M-1] - A[i];
        
        if(d<min) min=d;
    }

    return min;

}

int main(){

    int N = 8, M = 5;
    int A[] = {3, 4, 1, 9, 56, 7, 9, 12};

    cout<<"Chocolate distribute = "<<chocoDist(A, N, M);

    return 0;
}