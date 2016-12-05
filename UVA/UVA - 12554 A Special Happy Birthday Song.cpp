/**
 * rubelhassan
 * 17 Nov 2017
 */

#include<iostream>
#include<string>

using namespace std;


int main(){
    string song[] = {"Happy", "birthday", "to", "you",
                     "Happy", "birthday", "to", "you",
                     "Happy", "birthday", "to", "Rujia",
                     "Happy", "birthday", "to", "you"};
    int n;

    cin>>n;

    string chars[n];

    for(int j=0;j<n;j++){
        cin>>chars[j];
    }


    int r = 16;
    while(r < n){
        r += 16;
    }

    int c=0;
    for(int j=1; j<=r/16; j++){
        for(int i=0; i<16; i++){
            cout<<chars[c]<<": "<<song[i]<<endl;
            c++;
            if(c==n) c=0;
        }
    }

}
