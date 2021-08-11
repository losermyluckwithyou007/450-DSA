#include<iostream>
using namespace std;

int maxProfit(int price[], int n){

    int profit = 0;

    for(int i=1;i<n;i++){

        int sub = price[i] - price[i-1];

        if(sub > 0) profit += sub ;

    }

    return profit;

}

int main(){

    int price[] = { 90, 80, 70, 60, 50};
    int n = sizeof(price)/sizeof(price[0]); 

    cout<< " Maximun Profit = " << maxProfit(price, n);

    return 0;

}