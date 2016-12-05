/**
 * rubelhassan
 * 17 Nov 2016
 */

#include<iostream>
#include<string>


using namespace std;


int main(){

    int t=1;
    string in;

    while(cin>>in){
        if(in=="*") break;
        if(in=="Hajj") cout<<"Case "<<t<<": "<<"Hajj-e-Akbar"<<endl;
        else cout<<"Case "<<t<<": "<<"Hajj-e-Asghar"<<endl;
        t++;
    }

    return 0;
}
