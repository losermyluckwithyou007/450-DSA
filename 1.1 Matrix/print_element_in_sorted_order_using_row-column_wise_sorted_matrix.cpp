#include <bits/stdc++.h>
using namespace std;
#define SIZE 10

void printMatrix(int arr[SIZE][SIZE], int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void sortedMatrix(int arr[SIZE][SIZE], int n){

    int k=0;
    int temp[n*n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            temp[k++]=arr[i][j];
        }
    }

    sort(temp, temp+(n*n));
    int l=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=temp[l++];
        }
    }
}

int main()
{
    int arr[SIZE][SIZE] = {{10,20,30,40},
                            {15,25,35,45}, 
                            {27,29,37,48}, 
                            {32,33,39,50}};
        
        int n=4;

        cout<<"Original Matrix :\n";
        printMatrix(arr, n);

        sortedMatrix(arr , n);

        cout<<"\nSorted Matrix :\n";
        printMatrix(arr, n);
    
    return 0;
}