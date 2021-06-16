#include <iostream>
#include <set>
using namespace std;

int Union(int a[], int n, int b[], int m){

    set<int> s;

    for(int i=0 ; i<n ; i++ )
        s.insert(a[i]);

    for(int i=0 ; i<m ; i++ ) 
        s.insert(b[i]);

    return s.size();    

}

int main(){

    int a[7] = { 1, 2, 5, 6, 2, 3, 5 };
    int b[9] = { 2, 4, 5, 6, 8, 9, 4, 6, 5 };

    cout<<Union(a, 7, b, 9);


    return 0;
}