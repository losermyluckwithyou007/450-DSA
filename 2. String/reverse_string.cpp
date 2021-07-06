#include <bits/stdc++.h>
using namespace std;

void reverseString(string s[], int n){

    int low =0;
    int high = n-1;

    while(low<=high){

        swap(s[low], s[high]);
        low++;
        high--;

    }

}

int main(){

    string s[] = {"h","e","l","l","o"};
    int n = sizeof(s)/sizeof(s[0]);

    cout<<"String = ";

    for(int i=0;i<n;i++)
    cout<<s[i]<<" ";

    reverseString(s, n);
    cout<<"\nreverseString = ";

    for(int i=0;i<n;i++)
    cout<<s[i]<<" ";

    return 0;
}