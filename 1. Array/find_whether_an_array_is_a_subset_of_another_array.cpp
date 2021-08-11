#include<bits/stdc++.h>
using namespace std;

string isSubset(int *a1, int *a2, int n, int m){

    unordered_map<int, int>map;

    for(int i=0;i<n;i++) map[a1[i]]++;

    int c=0;

    for(int j=0;j<m;j++) if(map[a2[j]]) {c++;};

    if(c!=m) return "No";

    else return "Yes";

}

int main(){

    int a1[] = {10, 5, 2, 23, 19};
    int a2[] = {19, 5, 3};

    int n = sizeof(a1)/sizeof(a1[0]);
    int m = sizeof(a2)/sizeof(a2[0]);

    cout<<"Subset " << isSubset(a1, a2, n, m);

    return 0;

}