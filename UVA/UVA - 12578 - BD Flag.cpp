/**
 * rubelhassan
 * 20 Nov 2016
 */

#include<iostream>
#include<cmath>
#include<cstdio>

#define PI acos(-1)

using namespace std;

int main(){
    double l, w, r, area, circle, green;
    int t;

    cin>>t;


    while(t--){
        cin>>l;
        w = l * 0.6;
        r = l * 0.2;

        area = w * l;
        circle =  PI * r * r;

        green = area - circle;

        printf("%.2lf %.2lf\n", circle, green);
    }
}
