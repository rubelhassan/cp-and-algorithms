/**
 * rubelhassan
 * 17 Nov 2017
 */

#include<iostream>
#include<string>

using namespace std;

int main(){
    int t;
    long long int taka = 0, donation = 0;
    string ins;

    cin>>t;

    while(t--){
        cin>>ins;
        if(ins=="donate"){
            cin>>donation;
            taka += donation;
        }else{
            cout<<taka<<endl;
        }
    }

}
