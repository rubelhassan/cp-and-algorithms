/**
 * rubelhassan
 * 20 Nov 2016
 */
#include<iostream>
#include<algorithm>

using namespace std;


int main(){
    int a, b;

    while(cin>>a>>b){
        if(a == -1 && b == -1) break;

        if(a==b) cout<<0<<endl;
        else {
            if(a<b) swap(a, b);
            if(a-b<100-a+b){
                cout<<a-b<<endl;
            }else{
                cout<<100-a+b<<endl;
            }
        }
        /*
        if(a<b){
            if(b-a<100-b+a){
                cout<<b-a<<endl;
            }else{
                cout<<100-b+a<<endl;
            }
        }else if(a>b){
            if(a-b<100-a+b){
                cout<<a-b<<endl;
            }else{
                cout<<100-a+b<<endl;
            }
        }else{
            cout<<0<<endl;
        }*/
    }

    return 0;
}
