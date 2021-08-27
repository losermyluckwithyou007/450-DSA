#include<bits/stdc++.h>
using namespace std;

int sqaure(int num){
    
    int a = sqrt(num);

    if(a*a==num) return a-1;
    else return a;
}

int main(){

    int num = 9;

    cout<<"Sqaure = "<<sqaure(num);

    return 0;
}