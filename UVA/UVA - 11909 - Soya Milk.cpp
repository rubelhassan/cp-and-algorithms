/**
 * rubelhassan
 * 23 Nov 2016
 */

#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>

#define PI acos(-1)

using namespace std;


int main(){

    double l, w, h, x,  area, subArea;

    int angle;

    while(cin>>l>>w>>h>>angle){

        area = l*w*h;

        x = l * tan(angle*PI/180) ;

        if(x>h){
            x = tan((90-angle)*PI/180) * h;

            area = (x*h*w)/2;
        }else{
            subArea = (l*w*x)/2;

            area = area - subArea;
        }

        printf("%.3lf mL\n", area);
    }

    return 0;
}
