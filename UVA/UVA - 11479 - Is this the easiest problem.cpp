/**
 * rubelhassan
 * 29 Nov 2016
 */

#include<iostream>

using namespace std;

int main(){
    int tc;
    long long int a, b, c;

    cin>>tc;

    for(int i=1; i<=tc; i++){
        cin>>a>>b>>c;
        if((a+b > c) && (b+c > a) && (c+a > b) ){
            if(a==b && b==c){
                cout<<"Case "<<i<<": Equilateral"<<endl;
            }else if(a==b || b==c || a==c){
                cout<<"Case "<<i<<": Isosceles"<<endl;
            }else{
                cout<<"Case "<<i<<": Scalene"<<endl;
            }
        }else{
            cout<<"Case "<<i<<": Invalid"<<endl;
        }
    }

    return 0;
}
