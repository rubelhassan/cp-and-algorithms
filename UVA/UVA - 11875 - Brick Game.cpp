/**
 * rubelhassan
 * 5 Dec 2016
 */
#include<iostream>

using namespace std;

int main(){
    int tc, n;
    cin>>tc;

    for(int i=1; i<=tc; i++){
        cin>>n;
        int players[n];
        for(int j=0; j<n; j++){
            cin>>players[j];
        }

        cout<<"Case "<<i<<": "<<players[n/2]<<endl;
    }

    return 0;
}
