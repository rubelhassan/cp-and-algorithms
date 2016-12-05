/**
 * rubelhassan
 * 20 Nov 2016
 */

#include<iostream>
#include<string>
#include<cstdio>

using namespace std;


int main(){

    int t;

    int wsHour, wsMin, weHour, weMin;
    int msHour, msMin, meHour, meMin;
    int wStart =0 , wEnd=0, mStart=0, mEnd=0;
    cin>>t;

    for(int i=1;i<=t; i++){
        scanf("%d:%d %d:%d", &wsHour, &wsMin, &weHour, &weMin);
        scanf("%d:%d %d:%d", &msHour, &msMin, &meHour, &meMin);

        wStart = (wsHour*60) + wsMin;
        wEnd = (weHour*60) + weMin;

        mStart = (msHour*60) + msMin;
        mEnd = (meHour*60) + meMin;

        if((mStart >= wStart && mStart <= wEnd) ||
            (mEnd >= wStart && mEnd <= wEnd)) {
            printf("Case %d: Mrs Meeting\n", i);
        }else if((wStart >= mStart && wStart <= mEnd) ||
            (wEnd >= mStart && wEnd <= mEnd)) {
            printf("Case %d: Mrs Meeting\n", i);
        }else {
            printf("Case %d: Hits Meeting\n", i);
        }
    }

    return 0;
}

