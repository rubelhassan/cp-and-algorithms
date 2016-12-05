/**
 * rubel hassan
 * 11 Nov 2016
 */

#include<iostream>
#include<algorithm>

long long int a, b, carry, first, second, sum;

using namespace std;

int main(){
    int counter;
    while(cin>>a>>b){
        if(a==0 && b==0) break;

        counter = 0;
        carry = 0;
        sum = 0;

        if(a<b) swap(a, b);

        while(a != 0){
            first = a%10;
            second = b%10;

            a = a/10;
            b = b/10;

            sum = first+second+carry;
            if(sum > 9) carry = 1;
            else carry = 0;

            if(carry>0) counter++;
        }

        if(counter==0) cout<<"No carry operation."<<endl;
        else if(counter==1) cout<<counter<<" carry operation."<<endl;
        else cout<<counter<<" carry operations."<<endl;
    }

    return 0;

}


