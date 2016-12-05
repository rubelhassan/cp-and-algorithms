/**
* ONLINE JUDGE: UVA-ONLINE      *
* PROBLEM: 369 - Combinations   *
* TYPE: MATH-COMBINATION        *
* STATUS: ACCEPTED              *
* DATE: 16 JAN 2015             *
*/
#include<iostream>
using namespace std;
unsigned long long c = 1;
int main(){
   long long m, n;
    while(cin>>n>>m){
        if(m==0 && n==0){
            return 0;
        }
        if(n<m){
            cout<<n<<" things taken "<<m<<" at a time is "<<0<<" exactly."<<endl;
            continue;
        }else if(n == m){
            cout<<n<<" things taken "<<m<<" at a time is "<<1<<" exactly."<<endl;
            continue;
        }
        c = 1;
        int s;
        if((n-m) < m ) s=n-m;
        else s=m;
        for(int i=0;i<s ;i++){
            c = c*(n-i)/(i+1);
        }
        cout<<n<<" things taken "<<m<<" at a time is "<<c<<" exactly."<<endl;
    }
    return 0;
}
