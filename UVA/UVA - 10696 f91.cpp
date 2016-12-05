/**
 * rubel hassan
 * 11 Nov 2016
 */

#include<iostream>

using namespace std;


int func(int n){
    if(n>=101) return n-10;

    return func(func(n+11));
}


int main(){
    int n;

    while(cin>>n && n!=0){
        if(n>=101)
            cout<<"f91("<<n<<") = "<<n-10<<endl;
        else
            cout<<"f91("<<n<<") = "<<91<<endl;
    }
}
