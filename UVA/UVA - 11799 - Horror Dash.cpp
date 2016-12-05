/**
 * rubelhassan
 * 24 Nov 2016
 */

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;


int main(){
    int tc, n, m;

    cin>>tc;

    for(int i=1; i<=tc; i++){
        cin>>n;
        int c[n];
        m = 1;
        for(int j=0; j<n; j++){
            cin>>c[j];
            if(c[j] > m) m = c[j];
        }
        cout<<"Case "<<i<<": "<<m<<endl;
    }

    return 0;
}
