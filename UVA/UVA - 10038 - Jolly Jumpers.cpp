/**
* ONLINE JUDGE: UVA ONLINE JUDGE        *
* PROBLEM: Problem E: Jolly Jumpers     *
* TYPE: LINEAR DATA STRUCTURE (ARRAY)   *
* STATUS: ACCEPTED                      *
* DATE: 9 JAN 2915                      *
**/
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        int jolly[n],absJolly[n];
        bool isTrue = true;
        for(int inc = 0 ; inc <n ;inc++){
            cin>>jolly[inc];
        }
        for(int j=0;j<n-1;j++){
            absJolly[j] = abs(jolly[j+1] - jolly[j]);
        }
        sort(absJolly, absJolly + n-1);
        for(int i=0;i<n-1;i++){
            if(absJolly[i] != i+1){
                isTrue = false;
                break;
            }
        }
        if(isTrue){
            cout<<"Jolly"<<endl;
        }else{
            cout<<"Not jolly"<<endl;
        }
    }
}
