/**
 * rubelhassan
 * 17 Nov 2016
 */

#include<iostream>

using namespace std;

int gcd(int m, int n){
    while(n != 0){
        int t = m%n;
        m = n;
        n = t;
    }

    return m;
}


int main(){
    int g, n;

    while(cin>>n && n!=0){
        g=0;
        for(int i=1; i<n; i++){
            for(int j=i+1; j<=n; j++){
                g += gcd(j, i);
            }
        }

        cout<<g<<endl;
    }
}
