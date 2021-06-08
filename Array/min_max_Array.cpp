#include<iostream>
using namespace std;

void maxElement(int arr[],int n){

    int max=INT32_MIN;

    for(int i=0 ; i < n ; i++){

        if(arr[i]>max){

            max=arr[i];
        }
    }
    cout<<"Max is "<<max<<" ";
}

void minElement(int arr[],int n){

    int min=INT32_MAX;

    for(int i=0 ; i < n ; i++){

        if(arr[i]<min){

            min=arr[i];
        }
    }
    cout<<"Min is "<<min<<" ";
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);

    minElement(arr,n);
    cout<<endl;
    maxElement(arr,n);

    return 0;
}
