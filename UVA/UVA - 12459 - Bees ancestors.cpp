/**
 * rubelhassan
 * 20 Nov 2016
 */
#include<iostream>
#include<string>
#include<cstring>

using namespace std;

long long int store[81];

long long int bee(long long int n){

    if(store[n] == 0){
        if(n==1) store[n] = 1;
        else if(n==2) store[n] = 2;
        else if(n==3) store[n] = 3;
        else store[n] = bee(n-1) + bee(n-2);
    }

    return store[n];
}

int main(){
    long long int in;

    for(int i=0;i<81;i++) store[i] = 0;
    while(cin>>in){
        if(in==0) break;

        cout<<bee(in)<<endl;
    }

    return 0;
}
