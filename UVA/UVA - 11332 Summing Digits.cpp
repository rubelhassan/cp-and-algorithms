/**
 * rubelhassan
 * 16 Nov 2016
 */

#include<iostream>

using namespace std;

long long int digit, sum, cop;

int main(){

    while(cin>>digit && digit != 0){
        sum = digit;
        while(digit > 9){
            sum = 0;
            while(digit != 0){
                sum += (digit%10);
                digit = digit/10;
            }
            digit = sum;
        }

        cout<<sum<<endl;
    }

}
