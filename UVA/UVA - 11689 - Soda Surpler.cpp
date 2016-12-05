/**
 * rubel hassan
 * 24 Nov 2016
 */


#include<iostream>

using namespace std;


int main(){

    int n, emty, street, offer, total;

    cin>>n;

    while(n--){

        cin>>emty>>street>>offer;

        total = 0;

        emty = emty + street;

        while( (emty/offer) >= 1){
            total += (emty/offer);
            emty = (emty/offer) + (emty%offer);
        }

        if(emty == offer) total++;

        cout<<total<<endl;
    }

    return 0;

}
