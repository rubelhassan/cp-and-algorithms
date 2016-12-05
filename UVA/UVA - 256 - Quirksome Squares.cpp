#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;


int main(){
    int n;

    int maxPos = 0, sq, mul;
     unsigned int a = -3;
     unsigned long long int ab = a;
    cout<<a<<endl;
    while(cin>>n){
        if( 2==n ) {maxPos = 99; mul=10;}
        if( 4==n ) {maxPos = 9999; mul = 100;}
        if( 6==n ) {maxPos = 999999; mul = 1000;}
        if( 8==n ) {maxPos = 99999999; mul = 10000;}

        sq = sqrt(maxPos);


        for(int i=0; i<=sq; i++){
            for(int j=0; j<=sq; j++){
                if((i*mul+j) == (i+j)*(i+j)){
                    cout<<setfill('0') <<setw(n/2) <<i;
                    cout<<setfill('0') <<setw(n/2) <<j<<endl;
                }
            }
        }

    }
}
