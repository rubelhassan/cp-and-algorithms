/**
 * rubelhassan
 * 20 Nov 2016
 */
#include<iostream>
#include<algorithm>
#include <cstdio>
using namespace std;


int main(){
    double x,y,z,tc;
    cin>>tc;
    while(tc--) {
        cin>>x>>y>>z;
        x = z * (x - (x+y)/3) / ((x+y)/3);
        printf("%.lf\n", x);
    }
    return 0;
}

