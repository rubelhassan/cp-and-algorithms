/**
 * rubelhassan
 * 23 Nov 2016
 */

#include<iostream>

using namespace std;


int main(){

    int tc, n, hi, lo;

    cin>>tc;

    for(int i=1; i<=tc; i++){

        cin>>n;

        int walls[n];

        for(int j=0; j<n; j++)
            cin>>walls[j];

        hi =0; lo=0;

        for(int j=1; j<n; j++){

            if(walls[j-1] == walls[j]) continue;
            if(walls[j-1]<walls[j]) hi++;
            else lo++;
        }

        cout<<"Case "<<i<<": "<<hi<<" "<<lo<<endl;

    }


    return 0;
}
