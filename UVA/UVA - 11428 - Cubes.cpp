#include<iostream>
#include<string.h>

using namespace std;

bool arr[10001];
int x[10001], y[10001];

int main(){
    long long int a, b;
    int n;
    int  mx, dif;
    bool is;
    for(int i=0; i<10001; i++) arr[i] = false;

    for(int i=2; i<=58; i++){
        for(int j=1; j<i; j++){
            a = i*i*i;
            b = j*j*j;
            dif = (int)(a-b);
            if(dif <= 10000 ){
                if(!arr[dif]){
                    arr[dif] = true;
                    x[dif] = i;
                    y[dif] = j;
                }
            }
        }
    }



    while(cin>>n){
        if(n==0) break;

        if(arr[n]){
            cout<<x[n]<<" "<<y[n]<<endl;
        }else{
            cout<<"No solution"<<endl;
        }
    }

    return 0;
}
