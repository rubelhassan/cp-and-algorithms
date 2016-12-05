/**
* ONLINE JUDGE: UVA-ONLINE      *
* PROBLEM: 374 - Big Mod        *
* TYPE: BIG MOD                 *
* STATUS: ACCEPTED              *
* DATE: 09 FEB 2015             *
*/
#include<bits/stdc++.h>
using namespace std;
int bigMod(int b,int p,int m){
    if(p==0) return 1;
    if(p%2 ==0){
        int x = bigMod(b,p/2,m);
        return (x*x)%m;
    }
    else{
        return ((b%m)* bigMod(b,p-1,m))%m;
    }
}
int main(){
    int b,p,m;
    while(cin>>b>>p>>m){
        int r = bigMod(b,p,m);
        cout<<r<<endl;
    }
}
