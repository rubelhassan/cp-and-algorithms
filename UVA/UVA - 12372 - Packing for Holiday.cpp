/**
 * rubelhassan
 * 20 Nov 2016
 */
#include<iostream>
#include<string>

using namespace std;


int main(){
    int t, a, b, c;

    cin>>t;

    for(int i=1; i<=t; i++){
        cin>>a>>b>>c;

        if(a<=20 && b<=20 && c<=20){
            cout<<"Case "<<i<<": good"<<endl;
        }else{
            cout<<"Case "<<i<<": bad"<<endl;
        }
    }

    return 0;
}

