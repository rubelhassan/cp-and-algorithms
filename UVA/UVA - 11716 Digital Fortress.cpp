/**
 * rubelhassan
 * 24 Nov 2016
 */

#include<iostream>
#include<string>
#include<cmath>

using namespace std;


int main(){
    int tc, root, row;

    string in;

    cin>>tc;

    cin.ignore();

    while(tc--){
        getline(cin, in, '\n');

        int len = in.length();

        root = sqrt(len);

        if(root * root != len){
            cout<<"INVALID"<<endl;
            continue;
        }

        for(int i=0; i<root; i++){
            row = i;

            while(row < len){
                cout<<in[row];
                row += root;
            }
        }

        cout<<endl;

    }

    return 0;
}
