/**
 * rubel hassan
 * 11 Nov 2016
 */

 #include<iostream>

 using namespace std;


 int main(){

    int n, borrow, total, extra;

    while(cin>>n){
        borrow = 0;
        total = 0;
        extra = 0;
        if(n==1) cout<<1<<endl;
        else if(n>200) cout<<0<<endl;
        else{
            while(n>=1){
                total += n;
                n += extra;
                extra = n%3;
                n = n/3;
            }

            if(n+extra >= 2) cout<<total+1<<endl;
            else cout<<total<<endl;
        }


    }
 }
