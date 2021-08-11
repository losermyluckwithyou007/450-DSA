#include <iostream>
using namespace std;

struct eleCount {
    int e;
    int c;
}; 

void moreThenNdK(int A[], int n, int k){

    if(k<2) return;

    struct eleCount temp[k-1];
    for(int i=0;i<k-1;i++){
        temp[i].c = 0;
    }

    for(int i=0;i<n;i++){

        int j;

        for(j=0;j<k-1;j++){
            if(temp[j].e==A[i]){
            temp[j].c += 1;
            break;
            }
        }

        if(j==k-1){

            int l;

            for(l=0;l<k-1;l++){
                if(temp[l].c==0){

                    temp[l].e = A[l];
                    temp[l].c = 1;
                    break;
                }
            }
            
            if(l==k-1){
                for(l=0;l<k-1;l++){
                    temp[l].c -= 1;
                }
            }
        }
    }

        for(int i=0;i<k-1;i++){

            int ac=0;

            for(int j=0;j<n;j++){
                if(temp[j].e == A[i]){
                    ac++;
                }
            }
            
            if(ac>n/k){
            cout<<temp[i].e<<" "<<ac;
            }
        }

}

int main()
{
    int arr[] = {3, 1, 2, 2, 1, 2, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k=2;

    moreThenNdK(arr, n, k);

    return 0;
}