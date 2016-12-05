#include<iostream>
#include<string.h>

using namespace std;

int coin[] = {1, 5, 10, 25, 50};

int moneyCoin[6][7490];

int make;

int total[7490];

int coinChange(int i, int amount){
    if(i>=5){
        if(amount == make) return 1;
        return 0;
    }

    if(moneyCoin[i][amount] != -1)
        return moneyCoin[i][amount];

    int one = 0, two = 0;

    if(amount + coin[i] <= make) one = coinChange(i, amount+coin[i]);
    two = coinChange(i+1, amount);

    return moneyCoin[i][amount] = one+two;

}



int coinBottomUp(int i, int amount){

    if(i>=5) {
        if(amount == 0) return 1;
        return 0;
    }

    if(moneyCoin[i][amount] != -1) return moneyCoin[i][amount];

    int one = 0, two = 0;

    if(amount - coin[i] >=0 ) one = coinBottomUp(i, amount - coin[i]);
    two = coinBottomUp(i+1, amount);

    return moneyCoin[i][amount] = one + two;

}

// bottom-up more efficient O(coin*total)
int modified(){
    memset(total, 0, sizeof(total));
    total[0] = 1;
    for(int i=0; i<5; i++){
        for(int j=coin[i], k=0; j<=7489; j++, k++){
            total[j] += total[k];
        }
    }
}

int main(){

    // modified(); // iterative

    memset(moneyCoin, -1, sizeof(moneyCoin));

    while(cin>>make){
        //memset(moneyCoin, -1, sizeof(moneyCoin));
        //cout<<coinChange(0,  0)<<endl;
        cout<<coinBottomUp(0, make)<<endl;
        //cout<<total[make]<<endl;

        for(int i=0; i<5; i++){
            for(int j=0; j<=50; j++){
                cout<<moneyCoin[i][j]<<" ";
            }
            cout<<endl;
        }
    }

}
