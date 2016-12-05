/**
 * rubel hassan
 * 24 Nov 2016
 */

#include<iostream>
#include<cstdio>

using namespace std;

int main(){
    int sh, sm, eh, em, start, en;

    bool is = false;

    while(cin>>sh>>sm>>eh>>em){
        if(sh==0 && sm==0 && eh==0 && em==0) break;


        start = (sh*60) + sm;
        en = (eh*60) + em;

        if(start <= en) cout<<en-start<<endl;
        else cout<<(en+1440)-start<<endl;
    }

    return 0;
}
