#include<iostream>
#include<cstdio>

using namespace std;

int main(){

    double initial, far;

    int t;

    cin>>t;

    for(int i=1; i<=t; i++){
        cin>>initial>>far;

        far = (5.0/9)*(far-32) - (5.0/9)*(-32);

        initial = initial+far;

        printf("Case %d: %.2lf\n", i, initial);
    }

    return 0;
}
