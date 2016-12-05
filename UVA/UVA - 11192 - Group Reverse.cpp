/**
 * 12 Dec 2016
 * rubelhassan
 */

#include<iostream>
#include<string>

using namespace std;


int main(){
    int n, len, lo, hi, g;
    string in;

    while(cin>>g){
        if(g == 0) break;
        cin>>in;

        len = in.length();
        n = len/g;
        lo = 0;
        hi = n-1;

        while(hi < len){
            for(int i=hi; i >= lo; i--){
                cout<<in[i];
            }
            lo = hi+1;
            hi = hi+n;

        }
        cout<<endl;
    }
}
