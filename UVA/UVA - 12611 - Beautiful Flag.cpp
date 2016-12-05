/**
 * rubelhassan
 * 20 Nov 2016
 */

#include<iostream>
#include<cstdio>

using namespace std;

int main(){
    double l, w, r, area, circle, green, leftX, rightX , y;
    int t;

    cin>>t;


    for(int i=1; i<=t; i++){
        cin>>r;
        l = r/0.2;
        w = l*0.6;


        leftX = l * 0.45;
        rightX = l * 0.55;

        y = w/2;

        printf("Case %d:\n", i);
        printf("-%.lf %.lf\n", leftX , y);
        printf("%.lf %.lf\n", rightX , y);
        printf("%.lf -%.lf\n", rightX , y);
        printf("-%.lf -%.lf\n", leftX , y);
    }
}

