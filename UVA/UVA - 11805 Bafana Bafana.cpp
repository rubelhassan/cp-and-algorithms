/**
 * rubelhassan
 * 17 Nov 2016
 */

#include<iostream>

using namespace std;


int main(){

    int t, n, k, p, rem;

    cin>>t;

    for(int i=1; i<=t; i++){
        cin>>n>>k>>p;

        rem = p%n;

        if(rem == 0) cout<<"Case "<<i<<": "<<k<<endl;
        else{
            if(rem+k <= n)
                cout<<"Case "<<i<<": "<<k+rem<<endl;
            else{
                cout<<"Case "<<i<<": "<<(k+rem)-n<<endl;
            }
        }
    }

    return 0;
}
