/**
 * rubelhassan
 * 24 Nov 2016
 */

#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;


int main(){

    double u, v, t, s, a;

    int tc, i=0;

    while(cin>>tc){
        if(tc==0) break;
        if(tc==1){
            cin>>u>>v>>t;
            a = (v-u)/t;
            s = ((v*v)-(u*u))/(2*a);
            printf("Case %d: %.3lf %.3lf\n", ++i, s, a);
        }else if(tc==2){
            cin>>u>>v>>a;
            t = (v-u)/a;
            s = ((v*v)-(u*u))/(2*a);
            printf("Case %d: %.3lf %.3lf\n", ++i, s, t);
        }else if (tc==3){
            cin>>u>>a>>s;
            v = sqrt((u*u) + (2*a*s));
            t = (v-u)/a;
            printf("Case %d: %.3lf %.3lf\n", ++i, v, t);
        }else{
            cin>>v>>a>>s;
            u = sqrt((v*v) - (2*a*s));
            t = (v-u)/a;
            printf("Case %d: %.3lf %.3lf\n", ++i, u, t);
        }
    }

    return 0;

}
