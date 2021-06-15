#include<iostream>
#include<algorithm>
using namespace std;

void Kth_Element_min(int A[], int n, int k){

    sort(A, A+(n-1)-1);

    cout<< A[k-1];

}

int main()
{
    int A[]={4,5,8,10,1,3,2,6,9};
    int n = sizeof(A) / sizeof(A[0]);

    int k;
    cout<<"Enter Kth ";
    cin>>k;

    Kth_Element_min(A, n, k);

    return 0;
}
