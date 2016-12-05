/**
 * rubelhassan
 * 28 Nov 2016
 */

#include<iostream>
#include<string.h>

#define MAX_N 1000
#define MAX_W 30

int dp[MAX_N+1][MAX_W+1];
int weight[MAX_N+1];
int price[MAX_N+1];
int n, g, p, w, mw, cap;

using namespace std;

int max(int a, int b){
    if(a>b) return a;
    return b;
}

int knap(int item, int w){
    if(item == n+1) return 0;
    if(dp[item][w] != -1) return dp[item][w];

    int profit1=0, profit2=0;

    if(w+weight[item] <= cap){
        profit1 = price[item] + knap(item+1, w+weight[item]);
    }

    profit2 = knap(item+1, w);

    dp[item][w] = max(profit1, profit2);

    return dp[item][w];
}

int main(){

    int tc;


    cin>>tc;

    while(tc--){

        cin>>n;

        for(int i=1; i<=n; i++){
            cin>>price[i]>>weight[i];
        }

        cin>>g;

        int group[g];

        for(int i=0; i<g; i++){
            cin>>group[i];
        }

        int sum = 0;
        for(int i=0; i<g; i++){
            memset(dp, -1, sizeof(dp));
            price[0] = 0; weight[0] = 0;
            cap = group[i];
            mw = knap(1, 0);
            sum += mw;
        }

        cout<<sum<<endl;
    }

    return 0;

}
