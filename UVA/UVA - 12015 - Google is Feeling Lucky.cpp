/**
 * rubelhassan
 * 20 Nov 2016
 */

#include<iostream>
#include<string>
#include<climits>

using namespace std;

int main(){
    int arr[10];
    string srr[10];
    string in;
    int t, val;

    cin>>t;

    for(int i=1; i<=t; i++){
        int m = 0;
        for(int j=0; j<10; j++){
            cin>>in;
            cin>>val;
            if(val>m) m = val;
            arr[j] = val;
            srr[j] = in;
        }

        cout<<"Case #"<<i<<":"<<endl;
        for(int j=0; j<10; j++){
            if(arr[j] == m){
                cout<<srr[j]<<endl;
            }
        }

    }
}

