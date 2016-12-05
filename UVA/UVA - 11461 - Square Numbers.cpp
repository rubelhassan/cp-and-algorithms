/**
 * rubelhassan
 * 29 Nov 2016
 */

#include<iostream>
#include<cmath>


using namespace std;


int main(){
    int a, b, counter;

    while(cin>>a>>b){
        if(a==0 && b==0) break;

        int sq = sqrt(b);
        int s = sqrt(a);

        if(s*s < a) s += 1;

        counter = 0;

        for(int i=s; i<=sq; i++) counter++;

        cout<<counter<<endl;
    }

    return 0;

}
