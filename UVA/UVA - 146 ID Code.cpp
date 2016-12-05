/**
 * rubelhassan
 * 16 Nov 2016
 */

#include<iostream>
#include<algorithm>

using namespace std;


int main(){

    string in;

    while(cin>>in){
        if(in == "#") break;

        if(next_permutation(in.begin(), in.end())){
            cout<<in<<endl;
        }else{
            cout<<"No Successor"<<endl;
        }
    }

}

