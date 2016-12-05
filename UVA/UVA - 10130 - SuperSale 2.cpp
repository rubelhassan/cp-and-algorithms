/**
 * rubelhassan
 * 29 Nov 2016
 */

#include<iostream>
#include<string.h>

#define MAX_N 1000
#define MAX_W 30

int dp[MAX_N+1][MAX_W+1];
int weight[MAX_N+1];
int price[MAX_N+1];
int n, g, p, w;

using namespace std;

int max(int a, int b){
    if(a>b) return a;
    return b;
}

void knap(int item, int w){
    for(int i=1; i<=item; i++){
        for(int j=1; j<=w; j++){
            // weight isn't fit
            if(weight[i] > j){
                dp[i][j] = dp[i-1][j];
            }else{
                // not taking the current item
                if(dp[i-1][j] > (dp[i-1][j-weight[i]] + price[i]) ){
                    dp[i][j] = dp[i-1][j];
                }else{
                    // taking the current item
                    dp[i][j] = dp[i-1][j-weight[i]] + price[i];
                }
            }
        }
    }
}

int main(){

    int tc;


    cin>>tc;

    while(tc--){

        cin>>n;

        price[0] = 0; weight[0] = 0;

        for(int i=1; i<=n; i++){
            cin>>price[i]>>weight[i];
        }

        cin>>g;

        int group[g];

        for(int i=0; i<g; i++){
            cin>>group[i];
        }

        for(int i=0; i<=n; i++){
            dp[i][0] = 0;
        }

        for(int i=0; i<=30; i++){
            dp[0][i] = 0;
        }

        knap(n, 30);

        int sum = 0;

        for(int i=0; i<g; i++){
            sum += dp[n][group[i]];
        }

        cout<<sum<<endl;
    }

    return 0;

}
