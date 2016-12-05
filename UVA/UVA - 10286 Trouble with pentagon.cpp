/**
 * rubelhassan
 * 17 Nov 2016
 */

#include<iostream>
#include<cstdio>
#include<cmath>

#define PI acos(-1)

using namespace std;

// Every < of regular polygon is 540/5 = 108 thus
// sin(108)/ sin(63) -- 0.0000001067395 * pentaSide = largest square length

int main(){

    double a, ans;
    double rat = sin(108*PI/180)/sin(63*PI/180);

    while(cin>>a){
        ans = a*rat;
        printf("%.10f\n", ans);
    }
}
