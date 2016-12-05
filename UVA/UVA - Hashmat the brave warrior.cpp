#include<iostream>
using namespace std;
int main(){
    unsigned long int a,b; // IT NEEDS MORE

    while(cin>>a>>b){
        if(a>b){
            cout<<a-b<<endl;
        }else{
            cout<<b-a<<endl;
        }
    }
    return 0;
}
